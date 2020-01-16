#include<bits/stdc++.h>
using namespace std;
#define logn 20

long long n, i, x, y, queries, u, v, ans[100009], h[100009], visited[100009], visited1[100009], lastnodeatlevel[100009], k, parent[100009][21], len, p, temp, bin[100], in, common ,c;
vector<long long>g[100009];
//dfs -> O(n)
void find_heights(long long p , long long ht)  // for heights
{
	h[p] = ht+1;
	visited[p]=1;
	for(auto it = g[p].begin();it!=g[p].end();++it)
	{
		if(!visited[*it])
		{
			parent[*it][0] = p;
			find_heights(*it,h[p]);
		}
	}
}
//dfs and finding the parents for each node which takes log n so=> O(nlogn)
void parents_find(long long a ,long long cl) //cl-current level //finding the parents at levels 2^0 to logn for each node
{
	visited1[a]=1;
	lastnodeatlevel[cl] = a; // the last node which you saw at cl-th level in a particular path
	for(k=0;k<=logn;k++)
	{
		if((1<<k)<cl)
			parent[a][k] = lastnodeatlevel[cl - (1<<k)];
	}
	for(auto it = g[a].begin();it!=g[a].end();++it)
	{
		if(!visited1[*it])
		{
			parents_find(*it,cl+1);
		}
	}
}


long long lca(long long a , long long b)
{
	//make level of both the nodes equal   =>logn
	if(h[a]!=h[b])
	{
		if(h[a]>h[b])
			swap(a,b);
		p=b;
		temp = h[b]-h[a]; 

		for(in=0;in<=logn;in++)
		{
			bin[in] = temp%2;
			temp = temp/2;
			if(bin[in]==1)
				p = parent[p][in];
		}
		b = p;
	}

	//lca  => taking jumps in powers of 2 =>logn
	if(a==b) 
		return a;
	for(k=logn;k>=0;k--)
	{
		if(parent[a][k] != parent[b][k])
		{
			a = parent[a][k];
			b = parent[b][k]; 
		}
		else
			common = parent[a][k];
	}
	return common;
}


long long find_pathlen(long long r , long long a , long long b)
{
	c = lca(a,b);
	len = h[a] + h[b] -(2*h[c]);
	return len;
}

int main()
{
	cin>>n;
	for(i=1;i<n;i++)
	{
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	find_heights(1,0);
	parents_find(1,1);
	for(i=1;i<=logn;i++)
		parent[1][i]=1;

	cin>>queries;
	for(i=1;i<=queries;i++)
	{
		cin>>r>>u>>v;
		ans[i]=find_pathlen(r,u,v);
	}
	for(i=1;i<=queries;i++)
	{
		cout<<ans[i]<<endl;
	}
	return 0;
}
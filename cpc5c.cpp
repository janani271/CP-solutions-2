#include<bits/stdc++.h>
using namespace std;
long long n , m , st , i , u ,v, visited[5006],visited2[5007], r,c,s[100000],j;
vector<long long>g[5002];
vector<long long>uv;

void dfs(long long x)
{
	visited[x]=1;
	for(auto it=g[x].begin();it!=g[x].end();++it)
	{
		if(!visited[*it])
		{
			dfs(*it);
			c++;
		}
	}
}

void dfs2(long long x)
{
	visited2[x]=1;
	c++;
	for(auto it=g[x].begin();it!=g[x].end();++it)
	{
		if(visited2[*it]==0)
		{
			dfs2(*it);
		}
	}
}

bool cmp(long long a , long long b)
{
	return s[a]>s[b];
}

int main()
{
	cin>>n>>m>>st;

	for(i=0;i<m;i++)
	{
		cin>>u>>v;
		g[u].push_back(v);
	}

	for(i=1;i<=n;i++)
		visited[i]=0;

	dfs(st);

	for(j=1;j<=n;j++)
	{
		if(!visited[j])
		{
			c=0;
			for(i=1;i<=n;i++)
				visited2[i]=0;
			dfs2(j);
			//cout<<"dfs : "<<j<<" : "<<c<<endl;
			s[j]=c;
			uv.push_back(j);
		}
	}

	r=0;

	sort(uv.begin(),uv.end(),cmp);

	// for(auto itt=uv.begin();itt!=uv.end();itt++)
	// {
	// 	if(!visited[*itt])
	// 	{
	// 		cout<<*itt<<" : "<<s[*itt]<<endl;
	// 	}	
	// }

	for(auto itt=uv.begin();itt!=uv.end();itt++)
	{
		if(!visited[*itt])
		{
			dfs(*itt);
			r++;
		}	
	}
	cout<<r;
	return 0;
}
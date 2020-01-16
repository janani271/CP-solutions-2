#include<bits/stdc++.h>
using namespace std;

long long n , i , x , y , s , h[100009] ,visited[100009] ,tot , one ,two,m;
vector<long long>g[100009];
queue<long long>q;

void find_heights(long long p , long long ht)  // for heights
{
	h[p] = ht+1;
	//cout<<"\nheight of node: "<<p<<" is "<<h[p]<<"\n";
	visited[p]=1;
	for(auto it = g[p].begin();it!=g[p].end();++it)
	{
		if(!visited[*it])
		{
			find_heights(*it,h[p]);
		}
	}
}

int main()
{
	cin>>n;

	for(i=0;i<n-1;i++)
	{
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}

	find_heights(1,0);

	for(i=1;i<=n;i++)
	{
		if(h[i]%2==0)
			two++;
		else if(h[i]%2==1)
			one++;
	}

	//cout<<"\none: "<<one<<"\ttwo:"<<two<<"\n";

	tot = (one * two) - (n-1);
	cout<<tot;
	return 0;
}
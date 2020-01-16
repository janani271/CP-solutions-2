#include<bits/stdc++.h>
using namespace std;

long long n , i , x , ac[10009] , c[10000] , tot;
vector<long long> g[10009];

void dfs(long long p , long long col)
{
	ac[p] = col;
	for(auto it = g[p].begin();it!=g[p].end();++it)
	{
		dfs(*it,col);
	}
}

int main()
{
	cin>>n;
	for(i=2;i<=n;i++)
	{
		cin>>x;
		g[x].push_back(i);
	}
	// for(i=1;i<=n;i++)
	// {
	// 	ac[i]=0;
	// }
	tot=0;
	for(i=1;i<=n;i++)
	{
		cin>>c[i];
		if(ac[i]!=c[i])
		{
			dfs(i,c[i]);
			tot++;
		}
	}
	cout<<tot;
	return 0;
}
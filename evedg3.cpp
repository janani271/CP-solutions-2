#include<bits/stdc++.h>
using namespace std;
long long t , n , m , i , u , v , deg[100006], odd , even , comp[100005], c;
vector<long long>g[100009];
int main()
{
	cin>>t;
	while(t--)
	{
		c=1;
		cin>>n>>m;
		memset(deg,0,sizeof(deg));
		for(i=1;i<=n;i++)
			g[i].clear();
		for(i=1;i<=m;i++)
		{
			cin>>u>>v;
			deg[u]++; deg[v]++;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		for(i=1;i<=n;i++)
			comp[i]=c;
		if(m%2==1)
		{
			c++;
			odd = -1; even = -1;
			for(i=1;i<=n;i++)
			{
				if(deg[i]%2==1)
				{
					odd = i;
					break;
				}
			}
			if(odd==-1)
			{
				c++;
				for(i=1;i<=n;i++)
				{
					if(deg[i]!=0)
					{
						even = i;
						break;
					}
				}

				for(auto it = g[even].begin();it!=g[even].end();++it)
				{
					deg[*it]--;
					if(deg[*it]!=0 && deg[*it]%2==1)
					{
						odd = *it;
						break;
					}
				}
			}

			if(even!=-1) comp[even]=3;
			if(odd!=-1) comp[odd]=2;
		}

		cout<<c<<"\n";
		for(i=1;i<=n;i++)
		{
			if(deg[i]<=0)
				cout<<c<<" ";
			else cout<<comp[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
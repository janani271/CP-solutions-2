#include<bits/stdc++.h>
using namespace std;
#define SIZE 100009

long long prime[100010],i,j,n,m,tot,a[505][505],up; 
set<long long>s;
set<long long>moves;
void sieve()
{
	for(i=2;i<=SIZE;i++)
	{
		if(prime[i]==1)
		{
			for(j=i*i;j<=SIZE;j+=i)
			{
				prime[j] = 0;
			}
			s.insert(i);
		}
	}

	// for(i=2;i<=SIZE;i++)
	// {
	// 	cout<<i<<":"<<prime[i]<<"\n";
	// }
}

int main()
{
	prime[0]=0;
	prime[1]=0;
	for(i=2;i<=SIZE;i++)
	{
		prime[i]=1;
	}
	sieve();
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		tot=0;
		for(j=1;j<=m;j++)
		{
			cin>>a[i][j];
			if(!prime[a[i][j]])
			{
				up = *(s.lower_bound(a[i][j]));
				//cout<<"\n ele: "<<a[i][j]<<" lower_bound : "<<up;
				a[i][j] = up - a[i][j];
			}
			else
			{
				a[i][j] = 0;
			}
			//cout<<"\nafter modification : "<<a[i][j];
			tot += a[i][j];
		}
		moves.insert(tot);
	}

	for(i=1;i<=m;i++)
	{
		tot=0;
		for(j=1;j<=n;j++)
		{
			tot += a[j][i];
		}
		moves.insert(tot);	
	}

	// for(auto it = moves.begin();it!=moves.end();++it)
	// {
	// 	cout<<*it<<"\n";
	// }
	cout<<*(moves.begin());
	return 0;
}
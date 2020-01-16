#include<bits/stdc++.h>
using namespace std;
long long t , n  , k , maxi , l , r , i  , j , x ;
long long a[10000][10000];
long long c[10000];
int main()
{
		cin>>t;
		while(t--)
		{
			cin>>n>>k;
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
					a[i][j]=0;
				c[i]=0;
			}
			maxi=0;
			for(i=0;i<n;i++)
			{
				cin>>l>>r;

				for(x=0;x<n;x++)
				{
					if(x!=i)
					{
						for(j=l;j<=r;j++)
						{
							a[x][j]+=1;
						}
					}
				}
			}
			for(x=0;x<n;x++)
			{
				for(j=0;j<n;j++)
				{
					
						if(a[x][j]==k)
							c[x]++;
				}
				
				if(c[x]>maxi)
					maxi=c[x];
			}
			cout<<maxi<<"\n";

		}

}

#include<bits/stdc++.h>
#define SIZE 10000000
using namespace std;
long long  n , i ,j, c, prime[10000001];
int main()
{
	cin>>n;
	
	for(i=2;i<=SIZE;i++)
	{
		prime[i]=1;
	}

	c=0;

	for(i=2;i<=SIZE;i++)
	{
		if(prime[i]==1 && c<n)
		{
			for(j=i*i;j<=SIZE;j+=i)
			{
				prime[j]=0;
			}
			cout<<i<<" ";
			c++;
		}
	}

	return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define SIZE 1000000
long long n , c[SIZE] , a[SIZE] , dp[SIZE], i ;
int main()
{
	cin>>n;
	for(i=1;i<SIZE;i++)
	{
		c[i]=0;
	}
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		c[a[i]]++;
	}

	if(n==1)
		cout<<a[1];

	else
	{
		sort(a+1,a+n+1);
		dp[0] = 0;
		dp[1] = 1 * c[1];
		for(i=2;i<=a[n];i++)
		{
			dp[i] = max(dp[i-1] , (dp[i-2] + (i * c[i]) ) );
		}
		//cout<<"\n";
		cout<<dp[a[n]];
	}
	return 0;
}
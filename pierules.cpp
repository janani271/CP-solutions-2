#include<bits/stdc++.h>
using namespace std;
long long i , n , a[100] , dp[100][5];
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];

	// 0->alice 1->bob //also indicates if the pie is taken or not
	dp[n][0]=0;   //alice doesn't take the last value
	dp[n][1]=a[n];  //bob takes the last value

	for(i=n-1;i>=1;i--)
	{
		if(dp[i+1][1]<(dp[i+1][0]+a[i]))
		{
			dp[i][1] = dp[i+1][0] + a[i]; //since bob gets  the turn first =>1 will always have the better value
			dp[i][0] = dp[i+1][1];
		}

		else
		{
			dp[i][1] = dp[i+1][1];
			dp[i][0] = dp[i+1][0] + a[i] ;
		}
	}

	cout<<dp[1][0]<<" "<<dp[1][1];
}

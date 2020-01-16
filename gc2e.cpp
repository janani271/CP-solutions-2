//aka vacations
#include<bits/stdc++.h>
using namespace std;
long long n , i , a[200] , r=0 ,dp[200][5];
int main()
{
	cin>>n;
	dp[0][0] = 0;
	dp[0][1] = 0;
	dp[0][2] = 0;
	// dp is maximising the no.of work days
	// 0 alone has to be updated everytime because if not updated value will become zero
	for(i=1;i<=n;i++)
	{
		cin>>a[i]; 
		dp[i][0] = max(max(dp[i-1][0],dp[i-1][1]),dp[i-1][2]); //has to be updated everytime =>keeps track of max no.of days of work
		if(a[i]==1)
			dp[i][1] = max(dp[i-1][2], dp[i-1][0])+1;
		else if(a[i]==2)
			dp[i][2] = max(dp[i-1][1], dp[i-1][0])+1;
		else if(a[i]==3)
		{
			dp[i][1] = max(dp[i-1][2], dp[i-1][0])+1;
			dp[i][2] = max(dp[i-1][1], dp[i-1][0])+1;
		}
	}

	r = n - max(max(dp[n][0],dp[n][1]),dp[n][2]);
	cout<<r;
	return 0;
}
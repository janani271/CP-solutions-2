#include<bits/stdc++.h>
using namespace std;
#define SIZE 100002
long long n , c[100009] , a[100009] , dp[100009][3] , i ;
int main()
{
	cin>>n;

	for(i=1;i<=SIZE;i++)
	{
		c[i]=0;
	}
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		c[a[i]]++;
	}
	sort(a+1,a+n+1);
	dp[0][0] = 0;
	dp[0][1] = 0;
	for(i=1;i<=a[n];i++)
	{
		dp[i][0] = max(dp[i-1][0] , dp[i-1][1]); 
		dp[i][1] = dp[i-1][0] + (i * c[i]);
		//cout<<"for i: "<<dp[i][0]<<"\t"<<dp[i][1]<<"\n";
	}
	cout<< max(dp[a[n]][0] , dp[a[n]][1]);
	return 0;
}
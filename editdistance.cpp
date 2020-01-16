#include<bits/stdc++.h>
using namespace std; 
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long a , b , i , j;
		long long dp[a+5][b+5];
		string s1, s2;
		cin>>a>>b;
		cin>>s1>>s2;
		for(i=0;i<=a;i++)
			dp[i][0]=i;
		for(i=0;i<=b;i++)
			dp[0][i]=i;
		for(i=1;i<=a;i++)
		{
			for(j=1;j<=b;j++)
			{
				if(s1[i-1]==s2[j-1]) //if last characters match
					dp[i][j] = dp[i-1][j-1];
				else 
					dp[i][j] = min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j])) + 1;
			}
		}
		cout<<dp[a][b];
	}
	return 0;
}
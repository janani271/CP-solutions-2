#include<bits/stdc++.h>
using namespace std;
long long n , m , k , p[5002] , i , j , a[5002] , dp[5002][5002];
int main()
{
	cin>>n>>m>>k;
	p[0]=0;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		p[i] = p[i-1]+a[i];
	}

	for(i=1;i<=k;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==0 || j==0 || j<i*m)
			{
				dp[i][j]=0;			
			}
			else
			{
				dp[i][j] = max(dp[i][j-1] , dp [i-1][j-m]+p[j]-p[j-m]);
			}
		}
	}

	cout<<dp[k][n];
	return 0;
}
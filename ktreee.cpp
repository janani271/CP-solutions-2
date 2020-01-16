#include<bits/stdc++.h>
using namespace std;

long long n , k , d , i , j , dp1[1000] , dp2[1000] , ans;
int main()
{
	cin>>n>>k>>d;

	dp1[0]=1;

	for(i=1;i<=n;i++)
	{
		dp1[i]=0;
		for(j=1;j<=k;j++)
		{
			if(i>=j)
			{
				dp1[i]+=dp1[i-j];
				dp1[i] = dp1[i]%1000000007;
			}
			else
			{
				break;
			}
		}
		//cout<<"dp for "<<i<<" : "<<dp1[i]<<"\n";
	}

	if(d==0 || d==1)
		dp2[n]=0;
	else if(d==2)
		dp2[n]=1;
	else
	{
		dp2[0]=1;

		for(i=1;i<=n;i++)
		{
			dp2[i]=0;
			for(j=1;j<=d-1;j++)
			{
				if(i>=j)
				{
					dp2[i]+=dp2[i-j];
					dp2[i] = dp2[i]%1000000007;
				}
				else
				{
					break;
				}
			}
			//cout<<"dp for "<<i<<" : "<<dp2[i]<<"\n";
		}
	}
	
	 if(dp2[n] > dp1[n])
	 {
	 	ans = (dp1[n] - dp2[n] + 1000000007) % 1000000007;
		cout<<ans;
	 }
	else
		cout<<dp1[n]-dp2[n]<<"\n";

	return 0;
}
#include<bits/stdc++.h>
using namespace std;
long long t,n,i,a[200],b[200],score,maxi;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=1;i<=n;i++)
			cin>>a[i];
		for(i=1;i<=n;i++)
			cin>>b[i];
		maxi = -1;
		for(i=1;i<=n;i++)
		{
			score = max((a[i]*20)-(b[i]*10),(long long)0);
			if(score>maxi)
			{
				maxi = score;
			}
		}
		//cout<<"output: ";
		cout<<maxi<<endl;
	}
	return 0;
}
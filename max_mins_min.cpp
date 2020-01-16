#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n , k , j , i , mini , maxi , a[100006] ;
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	if(k==1)
	{
		maxi=a[0];
	}
	else
	{
		maxi=a[n-1];
		for(i=n-k;i<=n-1;i++)
		{
			if(a[i]>maxi)
				maxi = a[i];
		}
		mini=a[k];
		for(i=0;i<=k-1;i++)
		{
			if(a[i]<mini)
				mini=a[i];
		}
		if(mini>maxi)
			maxi=mini;
	}

	cout<<maxi;
}

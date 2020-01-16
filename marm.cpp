#include<bits/stdc++.h>
using namespace std;
long long t , n , k , i , a[10009], cnt1, cnt2, c[10009],ans[10009];
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cnt1 = k/n;
		cnt2 = k%n;
		for(i=0;i<n;i++)
		{
			c[i] = cnt1;
			if(i<cnt2)
				c[i]++;
		}
		for(i=0;i<n;i++)
		{
			if(i<n/2)
			{
				if(c[i]%3==1)
					ans[i] = a[i]^a[n-i-1];
				else if(c[i]%3==2)
					ans[i] = a[n-i-1];
				else if(c[i]%3==0)
					ans[i]=a[i];
			}
			else
			{
				if(c[i]%3==1)
					ans[i] = a[n-i-1];
				else if(c[i]%3==2)
					ans[i] = a[i]^a[n-i-1];
				else if(c[i]%3==0)
					ans[i]=a[i];
			}
		}
		if((n&1)&&(k>n/2))
			ans[(n/2)]=0;
		for(i=0;i<n;i++)
			cout<<ans[i]<<" ";
		cout<<"\n";		
	}
	return 0;
}
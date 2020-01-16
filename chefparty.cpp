#include<bits/stdc++.h>
using namespace std;
long long t , n , c=0 , i , a[100003];
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		c=0;
		for(i=0;i<n;i++)
		{
			a[i]=0;
			cin>>a[i];
		}
		sort(a,a+n);
		for(i=0;i<n;i++)
		{
			if(a[i]<=c)
				c++;
		}
		cout<<c<<"\n";
	}
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll t , n , a[40007] , c , d , res , i;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		c=0;d=0;res=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==2)
				c++;
			else if(a[i]==0)
				d++;
		}
		c--; d--;
		res = ((c*(c+1))/2) + ((d*(d+1))/2);
		cout<<res<<"\n";
	}
	return 0;
}
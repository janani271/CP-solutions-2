#include<bits/stdc++.h>
using namespace std;
long long n , c , i , j , a[100009] , p[1000009] , m , x;
int main()
{
	cin>>n;
	c = 1;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		for(j=c;j<a[i]+c;j++)
		{
			p[j] = i;
		}
		c += a[i];
	}
	cin>>m;
	for(i=0;i<m;i++)
	{
		cin>>x;
		cout<<p[x]<<"\n";
	}
	return 0;
}
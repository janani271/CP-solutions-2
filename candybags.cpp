#include<bits/stdc++.h>
using namespace std;
int n ,i,bags,j,s,c,b;
int main()
{
	cin>>n;
	bags = pow(n,2);
	c=1;
	b=bags;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n/2;j++)
		{
			cout<<c<<" ";
			c++;
		}
		for(j=1;j<=n/2;j++)
		{
			cout<<b<<" ";
			b--;
		}

		cout<<"\n";
	}
	return 0;
}
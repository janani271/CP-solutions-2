#include<bits/stdc++.h>
using namespace std;
long long n , i , a[10000] , c ;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	for(i=0;i<n;i++)
	{
		c = 0;
		while(a[i]>1)
		{
			if(a[i]%2==0)
			{
				a[i]=a[i]/2;
				c++;
			}
			else if(a[i]%3==0)
			{
				a[i]=2*(a[i]/3);
				c++;
			}
			else if(a[i]%5==0)
			{
				a[i]=4*(a[i]/5);
				c++;
			}
			else
			{
				c = -1;
				break;
			}
		}
		cout<<c<<"\n";
	}
	return 0;
}
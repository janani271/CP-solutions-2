#include<bits/stdc++.h>
using namespace std;

long long n , c;

int main()
{
	cin>>n;
	c=0;
	while(n>0)
	{
		if(n>=100)
		{
			if(n<200)
			{
				n = n % 100;
				c++;
			}
			else
			{
				c = c + (n/100);
				n = n%100;
			}
		}

		else if(n>=20)
		{
			if(n<40)
			{
				n = n % 20;
				c++;
			}
			else
			{
				c = c + (n/20);
				n = n%20;
			}
		}

		else if(n>=10)
		{
			if(n<20)
			{
				n = n % 10;
				c++;
			}
			else
			{
				c = c + (n/10);
				n = n%10;
			}
		}

		else if(n>=5)
		{
			if(n<10)
			{
				n = n % 5;
				c++;
			}
			else
			{
				c = c + (n/5);
				n = n%5;
			}
		}

		else if(n>=1)
		{
			c+=n;
			n=0;
		}
	}

	cout<<c;
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
long long i , n , a[100007] , len , p  , pos;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	if(n==1)
		cout<<"1";
	else if(n==2)
		cout<<"2";
	else
	{
		len = 0; p=0; pos=2; i=0;

		for(i=pos;i<n;i++)
		{
			if(a[i]==a[i-1]+a[i-2])
				len++;
			else 
			{
				len=0;
			}
			if(p<len)
				p=len;

			//cout<<"\npos: "<<pos<<" "<<len;
		}

		if(p==0) 
		 	p=2;
		else
			p+=2;
		cout<<p;
	}
	return 0;
}
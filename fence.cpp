#include<bits/stdc++.h>
using namespace std;

long long n , k , i , h[160000] , start , s[160000] , small , pos , maxi , sum;

int main()
{
	cin>>n>>k;
	small = 150;
	maxi=0;

	for(i=1;i<=n;i++)
	{
		cin>>h[i];
		maxi+=h[i];
		if(h[i]<small)
		{
			pos=i;
			small=h[i];
		}
	}

	if(k==1)
		cout<<pos;

	else if(n==k)
		cout<<1;

	else
	{
		start = 1;
		for(i=1;i<=n;i++)
		{
			s[i]=0;
		}

		for(i=1;i<=n;i++)
		{
			if((i-start) < k)
				s[start] += h[i];  
			else
			{
				s[start+1] = s[start] -h[start] + h[i]; 
				start+=1;
			}
		}

		for(i=1;i<=n-k+1;i++)
		{
			//cout<<s[i]<<"\n";
			if(s[i]<maxi)
				{maxi = s[i]; pos = i;}
		}

		cout<<pos;
	}

	return 0;
}
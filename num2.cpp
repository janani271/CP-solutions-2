#include<bits/stdc++.h>
using namespace std;
long long n , i , f , l , pc , a[100006];
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	f=0; l=n-1;
	while(f<=l)
	{
		if(a[f]+a[l]==0)
		{
			pc++;
			l--;	
		}
		else 
		{
			if(abs(a[i])<abs(a[n-i-1]))
			{
				l--;
			}
			else
			{
				f++;
			}
		}
	}
	cout<<pc;
}

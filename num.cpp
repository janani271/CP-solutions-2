#include<bits/stdc++.h>
using namespace std;
long long n , i , j , pc , a[100006];
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	pc=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==0)
			pc++;
		}
	}
	cout<<pc/2;
}

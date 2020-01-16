
//there's a better O(n) solution but I don't know
#include<bits/stdc++.h>
using namespace std;
long long n , p[500009] ,s, sc , i , tot_count=0,a[500009];
int main()
{
	cin>>n;
	p[0]=0;

	sc=0;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		p[i] = p[i-1] + a[i];
	}
	if(p[n]%3!=0)
	{
		cout<<"0";
		return 0;
	}
	s=p[n];
	for(i=1;i<=n;i++)
	{
		if(p[i]==2*s/3)
			tot_count += sc;
		if(p[i]==s/3)
			sc++;
	}
	cout<<tot_count;
	return 0;
}
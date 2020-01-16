#include<bits/stdc++.h>
using namespace std;
double n , p[100000],s;
int i;
double ans;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>p[i];
		s+=p[i];
	}

	ans = s/n;
	cout<<setprecision(12)<<ans;
	return 0;
}
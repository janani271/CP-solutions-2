#include<bits/stdc++.h>
using namespace std;
#define SIZE 1000000000000000001
long long t,i,n,f[65],ans,in;
vector<long long>p;
int main()
{
	cin>>t;
	f[1]=0;
	f[2]=1;
	for(i=3;i<=60;i++)
	{
		f[i] = ((f[i-1]%10)+(f[i-2]%10))%10;
	}
	ans=1;
	p.push_back(ans);
	while(ans<SIZE)
	{
		ans = ans*2;
		p.push_back(ans);
	}
	while(t--)
	{
		cin>>n;
		in = upper_bound(p.begin(),p.end(),n) - p.begin()-1;
		cout<<f[p[in]%60]<<"\n";
	}
}
#include<bits/stdc++.h>
using namespace std;
long long i , n , q , v , p , a[100006], b[100006];
map<long long, long long>m;
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		m[a[i]]=i;
	}
	v=0;p=0;
	cin>>q;
	for(i=1;i<=q;i++)
	{
		cin>>b[i];
		v += m[b[i]];
		p += (n - m[b[i]] + 1);
	}
	cout<<v<<" "<<p;
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
long long n , q , i , a[200009] , l , r , p[200009] , tot_sum=0;  
int main()
{
	cin>>n>>q;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(i=1;i<=q;i++)
	{
		cin>>l>>r;
		p[l] = p[l] + 1;
		p[r+1] = p[r+1] - 1;
	}

	p[0]=0;
	for(i=1;i<=n;i++)
	{
		p[i] = p[i-1] + p[i];
	}

	sort(p+1,p+n+1);

	for(i=1;i<=n;i++)
	{
		tot_sum += p[i]*a[i];
	}
	cout<<tot_sum;
	return 0;
}
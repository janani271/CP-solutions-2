#include<bits/stdc++.h>
using namespace std;
long long n , m , i , a[1000000] , w[1000000] , h[1000000] , bottom[1000000];
long long ans , l ;
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}	
	cin>>m;
	for(i=1;i<=m;i++)
	{
		cin>>w[i]>>h[i];
	}

	l = 0 ;

	//this is based on the given condition that initially for any  i , a[i]<=a[i+1]

	bottom[1] = a[w[1]];   //height of the w-1th stair before dropping box =>bottom
	a[w[1]]+=h[1];  //height of the w-1th stair after dropping the box updated
	l = a[w[1]]; //latest change in height which is ALWAYS greater than or equal 
	             //to the previous change in height

	for(i=2;i<=m;i++)
	{
		ans = max(l , a[w[i]]);
		bottom[i]=ans;
		a[w[i]] = ans + h[i];
		l = a[w[i]];
	}

	for(i=1;i<=m;i++)
	{
		cout<<bottom[i]<<"\n";
	}
	return 0;
}
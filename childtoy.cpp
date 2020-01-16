#include<bits/stdc++.h>
using namespace std;
long long n , m , v[10000] , i , x , y , cost;
int main()
{
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		cin>>v[i];
	}
	cost=0;
	for(i=1;i<=m;i++)
	{
		cin>>x>>y;
		cost += v[x]<=v[y]?v[x]:v[y];
	}
	cout<<cost;
}
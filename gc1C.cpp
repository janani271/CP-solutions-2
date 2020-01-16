#include<bits/stdc++.h>
using namespace std;
long long n , i , parent[2009] , ht[2009] , h ;

long long height(long long par , long long hti)
{
	if(hti)
		return hti;
	else if(par == -1)
		return 1;
	else if(ht[par])
		return ht[par] + 1;
	else
		return height(parent[par] , ht[par]) + 1;
}

int main()
{
	cin>>n;

	for(i=1;i<=n;i++)
	{
		cin>>parent[i];
	}

	for(i=1;i<=n;i++)
		ht[i]=0;

	h = 0;

	for(i=1;i<=n;i++)
	{
		ht[i] = height(parent[i] , ht[i]);
		//cout<<"\n height of "<<i<<" : "<<ht[i];
		if(ht[i]>h)
			h=ht[i];
	}

	cout<<h;

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

long long t , n , i , a[100009] , maxi;
unordered_map<long long,long long>m;

void find_factors(long long x)
{
	long long y = sqrt(x);
	for(int j=1;j<=y;j++)
	{
		if(x%j==0)
		{
			m[j]++;
			if(x/j != j)
				m[x/j]++;
		}
	}
}

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		m.clear();
		maxi = 0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(m[a[i]]>maxi)
			{
				maxi = m[a[i]]; 
			}
			find_factors(a[i]);
		}
		cout<<maxi<<"\n";
	}
	return 0;
}
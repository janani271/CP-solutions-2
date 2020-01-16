#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	long long n , i , jars , a[100000] ; 
	cin>>t;
	while(t--)
	{
		cin>>n;
		jars=0;
		for(i=0;i<n;i++)
		{
			a[i]=0;
			cin>>a[i];
			jars += a[i]-1;
		}
		jars += 1;
		cout<<jars<<"\n";
	}
}
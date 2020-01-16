#include<bits/stdc++.h>
using namespace std;
long long t,n,k;

bool check(long long a , long long b)
{
	n = n/k;
	if(n/k == 0)
		return false;
	return (n%k==0);
}

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		if(k==1 || check(n,k)) 
			cout<<"NO";
		else
			cout<<"YES";
		cout<<endl;
	}
	return 0;
}
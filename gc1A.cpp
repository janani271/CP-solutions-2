#include<bits/stdc++.h>
using namespace std;
long long n , k ;
int main()
{
	cin>>n>>k;
	if((n/k)%2!=0)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
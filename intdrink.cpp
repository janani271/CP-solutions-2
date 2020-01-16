#include<bits/stdc++.h>
using namespace std;
vector <long long> v;
long long n , q , i , m[1000009],x;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	cin>>q;
	for(i=0;i<q;i++)
	{
		cin>>m[i];
	}

	sort(v.begin(),v.end());
	vector<long long>::iterator it;

	for(i=0;i<q;i++)
	{
		it = upper_bound(v.begin(),v.end(),m[i]);
	 	cout<<it-v.begin()<<"\n";
	}

	return 0;
}
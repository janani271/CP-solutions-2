#include<bits/stdc++.h>
using namespace std;
set<char> s[100006];
set<char>::iterator it;
long long t , n , i , j  ;
string str;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>str;
			for(j=0;j<str.length();j++)
				s[i].insert(str[j]);
		}
		
		sort(s,s+n);
		
		
		for(i=0;i<n;i++)
		{
			for(it=s[i].begin();it!=s[i].end();++it)
				cout<<*it;
			cout<<"\n";
		}
	}
}

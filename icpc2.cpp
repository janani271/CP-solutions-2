#include<bits/stdc++.h>
using namespace std;
long long t , n , i , c , ans;
string s;
map<string,pair<long long,long long>>m;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		m.clear();
		for(i=0;i<n;i++)
		{
			cin>>s>>c;
			if(c==0)
			m[s].first++;
			else m[s].second++;			
		}
		ans=0;
		for(auto it=m.begin();it!=m.end();++it)
		{
			ans += max((it->second).first , (it->second).second);
		}
		cout<<ans<<"\n";
	}
	return 0;
}
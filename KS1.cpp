#include<bits/stdc++.h>
using namespace std;
#define mp unordered_map<long long, long long>
long long t , n , i , a[100006],x[100008],ans,dist;
mp m , c , s;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		x[0]=0;
		ans=0; dist=0;
		for(i=1;i<=n;i++)
		{
			cin>>a[i];
			x[i] = x[i-1]^a[i];
			if(m.find(x[i])!=m.end())
			{
				dist = i - m[x[i]];
				s[x[i]] = (dist - 1) + s[x[i]] + (dist*c[x[i]]);
				if(x[i]!=0)
					s[x[i]] -= dist;
			}
			if(m.find(x[i])==m.end())
			{
				s[x[i]]=0;
			}
			if(m.find(x[i])==m.end() && x[i]==0)
			{
				s[x[i]]=i-1;
			}
			c[x[i]]+=1;
			m[x[i]]=i;
			ans += s[x[i]];
		}
		cout<<ans<<endl;
		m.clear();
		c.clear();
		s.clear();
	}
	return 0;
}

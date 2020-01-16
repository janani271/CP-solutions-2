#include<bits/stdc++.h>
using namespace std;

unsigned long long c[1000000] , m ,len, j , l , r,ans[10000000]; 
string s;

void prefix_count(string a)
{
	len = a.size();
	unsigned long long i;
	c[0]=0;
	for(i=1;i<len;i++)
	{
		if(a[i]==a[i-1])
			c[i]=c[i-1]+1;
		else
			c[i]=c[i-1];
	}
}

int main()
{
	cin>>s;
	prefix_count(s);

	cin>>m;
	for(j=0;j<m;j++)
	{
		cin>>l>>r;
		ans[j] = c[r-1] - c[l-1];
	}

	for(j=0;j<m;j++)
	{
		cout<<ans[j]<<"\n";	
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
long long t,len,i,sum;
string str;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>str;
		len = str.length();
		sum=0;
		for(i=0;i<len;i++)
		{
			if(str[i]=='1')
				sum++;
		}
		if(sum%2==1)
			cout<<"WIN";
		else cout<<"LOSE";
		cout<<"\n";
	}
	return 0;
}

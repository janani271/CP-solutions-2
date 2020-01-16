#include<bits/stdc++.h>
using namespace std;

string p;
int flag;

int main()
{
	cin>>p;
	string::iterator it;
	flag = 0;
	for(it=p.begin();it!=p.end();it++)
	{
		if(*it=='H' || *it=='Q' || *it=='9')
			flag=1;
	}
	if(flag==1)
		cout<<"YES";
	else
		cout<<"NO";

	return 0;
}
#include<bits/stdc++.h>
using namespace std;
long long a , b;
int main()
{
	cin>>a>>b;
	if(a%2==0 && b%2==0)
		cout<<"-1";
	else
	{
		if(b==2)
			swap(a,b);
		if(b==1)
			cout<<"0";
		else
			cout<<b/2;
	}
	return 0;
}
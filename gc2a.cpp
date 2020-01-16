#include<bits/stdc++.h>
using namespace std;
long long n , i , x , tot=0; 
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		tot += abs(x);
	}
	cout<<tot;
	return 0;
}

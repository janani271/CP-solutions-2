#include<bits/stdc++.h>
using namespace std;
int even_count, odd_count,total,i , n , a[10000];
int main()
{
	even_count=0 , odd_count = 0 , total =0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]%2==0)
			even_count++;
		else
			odd_count++;

		total+=a[i];
	}

	if(total%2==0)
		cout<<even_count;
	else
		cout<<odd_count;

	return 0;
}
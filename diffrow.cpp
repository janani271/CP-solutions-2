#include<bits/stdc++.h>
using namespace std;
long long n , i , a[107] , temp;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);

	temp=a[0];
	a[0]=a[n-1];
	a[n-1]=temp;
	i=1;

	while(i<n/2)
	{
		if(a[i-1]-a[i] < a[i-1]-a[n-i-1])
		{
			temp = a[i];
			a[i]=a[n-i-1];
			a[n-i-1]=temp;
		}
		i++;
	}

	for(i=0;i<n;i++)
		cout<<a[i]<<" ";

	return 0;
}
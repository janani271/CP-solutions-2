#include<bits/stdc++.h>
using namespace std;
long long n , i , a[1000000] , fix[1000000] , fp , flag , f ;
int main()
{
	cin>>n;
	fp=0;
	f=1;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==i)
		{
			fp+=1;
			fix[i]=1;
		}
		else
		{
			fix[i]=0;
			f=0;
		}
	}

	if(f==1)
		cout<<n;
	else
	{
		flag=0;
		for(i=0;i<n;i++)
		{
			if(fix[i]==0)
			{
				 if(a[a[i]]==i)
				 {
				 	flag=1;
				 	break;
				 }
			}
		}
		if(flag)
			fp+=2;
		else
			fp++;
		cout<<fp;
	}
	return 0;
}
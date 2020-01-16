#include<bits/stdc++.h>
using namespace std;
int n , i , j , a[103] , sum ,sum1, p , k ;
int main()
{
	cin>>n;
	sum=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==1)
			sum++;
	}

	//cout<<"\ninitial sum: "<<sum;
	p=sum;
	sum1=sum;

	if(n==1)
	{
		if(sum==1)
			cout<<"0";
		else cout<<"1";
	}
	else if(sum==n)
	{
		cout<<sum-1;
	}	
	else
	{
		for(i=0;i<n;i++)
		{
			for(j=i;j<n;j++)
			{	
				sum=sum1;
				for(k=i;k<=j;k++)
				{
					if(a[k]==0)
						sum++;
					else 
						sum--;
				}

				//cout<<"\nsum from i: "<<i<<" to j: "<<j<<" : "<<sum;
				if(sum>p)
				{
					p=sum;
				}
			}
		}

		cout<<p;
	}

	return 0;
}
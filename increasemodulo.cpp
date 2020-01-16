#include<bits/stdc++.h>
using namespace std;
long long n , p , m , i , a[300009] , v[300009] , low , high , mid;
int flag;
int main()
{
	cin>>n>>m;
	flag=1;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(i!=0 && a[i]<a[i-1])
			flag=0;
	}

	if(flag==1)
	{
		cout<<"0";
    }
	else
	{
		low=0; high=m-1; p = 9999999;

		while(low<=high)
		{
			mid = (low + high)/2;
			flag=1;
			
			for(i=0;i<n;i++)
			{
				v[i]=a[i];
			}

			for(i=0;i<n;i++)
			{
				if(i==0)
				{
					if((v[i]+mid) >= m)
						v[i] = 0;
				}
				else if(v[i]>v[i-1] && i!=0)
				{
					if( (v[i]+mid)%m >= v[i-1] && (v[i]+mid)%m <= v[i])
						v[i] = v[i-1];
				}
				else if(v[i]<v[i-1] && i!=0)
				{
					if( (v[i]+mid)%m < v[i-1] && (v[i]+mid)<v[i-1] )
					{
						low = mid+1;
						flag = 0;
						break;
					}
					else
						v[i] = v[i-1] ;
				}
			}

			if(flag)
			{
				high = mid-1; 
				if(mid<p && mid>0)
				{
					p = mid;
				}
			} 
		}

		cout<<p<<"\n";
	}
	
	return 0;
}
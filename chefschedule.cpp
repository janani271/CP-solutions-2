#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t , n , k , i , low , high , mid , result , count ,maxi;
    string a,temp;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		cin>>a;
		
		low=1; high=n;

		while(low<=high)
		{
			mid=(low+high)/2;
			temp=a;
			count=0;
            maxi=1;
            if(mid>1)
            {
			for(i=1;i<n;i++)
			{
				if(temp[i]==temp[i-1])
				{
				    if(maxi<mid)
				        maxi++;
				    else
				    {
				        maxi=1;
				        if(temp[i]=='1')
				        temp[i]='0';
				        else
				        temp[i]='1';
				        count++;
				    }
				}
				else
				{
				    maxi=1;    
				}
			}
            }
            else if (mid==1)
            {
                for(i=1;i<n-1;i++)
                {
                    if((temp[i-1]==temp[i])&&(temp[i]==temp[i+1]))
                    {
                        if(temp[i-1]=='1')
                        temp[i]='0';
                        else
                        temp[i]='1';
                        count++;
                    }
                    
                    else if((temp[i-1]==temp[i])&&(temp[i]!=temp[i+1]))
                    {
                        temp[i-1]=temp[i+1];
                        count++;
                    }
                    
                    else if((temp[i+1]==temp[i])&&(temp[i]!=temp[i-1]))
                    {
                        temp[i+1]=temp[i-1];
                        count++;
                    }
                }
            }
			//cout<<"\nmid: "<<mid<<" temp: "<<temp<<" count: "<<count<<"\n";
			if(count<=k)
			{
				high=mid-1;
				result=mid;
			}
			else if(count>k)
				low=mid+1;
		}

		cout<<result<<"\n";
	}
}
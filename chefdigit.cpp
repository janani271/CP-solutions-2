#include<bits/stdc++.h>
using namespace std;
long long t , n , d , temp , i , nod , j , a[30];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>d;
        temp=0;
        temp=n;
        while(temp!=0)
        {
        	temp = temp/10;
        	nod++;    
        }
        temp=n;
        for(i=1;i<=nod;i++)
        {
        	a[i]=temp%10;
        	temp=temp/10;
        }

        for(i=1;i<=nod;i++)
        {
        	if(d<=a[i])
        	{
        	    for(j=1;j<i;j++)
        	    {
        	        a[j+1]=a[j];
        	    }
        	    a[1]=d;
        	}
        }
        
        temp=0;
        
        for(i=1;i<=nod;i++)
        {
        	temp = temp + (a[i]*pow(10,i-1));
        }
        
        cout<<temp<<"\n";
    }
}

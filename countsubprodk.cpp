#include<bits/stdc++.h>
using namespace std;
long long t , n , k , i , j , c , p , a[100009];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0;i<n;i++)
            cin>>a[i];
        p=a[0]; 
        i=0; j=0; c=0; 
        while(i<n && j<n)
        {
        	//cout<<"ele: "<<a[j]<<"\n";
        	//cout<<"mmain i : "<<i<<" main j : "<<j<<"\n";
            if(i==j)
            {
                if(a[i]<k)
                {
                    p=a[i];
                    //cout<<"p: "<<p<<"\n";
                    //cout<<"i : "<<i<<"\tj: "<<j<<"\n";
                    j++;
                }
                else
                {
                    i++;j++;
                }
            }
            else
            {
                if(p*a[j]<k)
                {
                	p = p*a[j];
                    j++;
                }
                else
                {
                    c += ((j-i+1)*(j-i))/2;
                    //cout<<"c: "<<c<<"\n";
                    //cout<<"i: "<<i<<"\tj: "<<j<<"\n";
                    // if(j!=i-1)
                    //     c += (j-i+1);
                    p = p/a[i];
                    i++;
                }
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}
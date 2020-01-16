#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t , n , i , def , a[110] , d[110];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            a[i]=0;
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>d[i];
        }
        def=0;
        if((a[n-1]+a[1])<d[0])
            def = d[0];
        if((a[n-2]+a[0])<d[n-1] && d[n-1]>def)
            def = d[n-1];
        for(i=1;i<=n-2;i++)
        {
            if((a[i-1]+a[i+1])<d[i] && d[i]>def)
                def = d[i];
        }
        if(def <= 0)
        {
            cout<<"-1"<<"\n";
        }
        else
            cout<< def <<"\n";
    }
}
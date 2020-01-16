#include <bits/stdc++.h>
using namespace std;
long long t , n , i ,flag; 
string a;
int main() {
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    cin>>a;
	    int c[30] = {0};
	    for(i=0;i<n;i++)
	    {
	        c[a[i]-'a']++;
	    }
	    flag=0;
	    for(i=0;i<n;i++)
	    {
	    	//cout<<"\nC: "<<a[i]<<"\tcount: "<<c[a[i]-'a'];
	       if(c[a[i]-'a']==1)
	       {
	           cout<<a[i]<<endl;
	           flag=1;
	           break;
	       }
	    }
	    if(!flag)
	    cout<<"-1\n";
	}
	return 0;
}
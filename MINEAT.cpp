#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int t ;
    long long n, h, N , first , last , mid , m , nhours , k , x;
    nhours=0;
    vector<long> A ;
    //vector<long> hour ;
	cin >> t ;
	while(t!=0)
	{
	    cin >> n >> h;
	    for(int N=0 ; N<n ; N++)
	    {
	        cin >> x ;
	        A.push_back(x);
	    }
	    sort (A.begin(),A.end());
	    first = 1;
	    last = A[A.size() - 1];
	    //k = A[last] ;
	    while(first<=last)
	    {
	        mid = (first + last)/2;
	        
	        for(int m=0;m<n;m++)
	        {
	            nhours += ceil(float(A[m])/mid);
	             
	        }
	        //nhours=0;
	        //nhours = accumulate(hour.begin(),hour.end(),0);
	        if(nhours<=h && mid<k)
	        {
	           k=mid;
	           last=mid-1;
	        }
	        else 
	        	first = mid+1;
	        nhours=0;
	    }
	    t--;
	    cout<<k<<"\n";
	    A.clear();
	}
	return 0;
}

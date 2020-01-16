#include<bits/stdc++.h>
using namespace std;
long long i , n , a[100008] , b[100008] , diff[100009] , sum;
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    cin>>b[i];
    for(i=0;i<n;i++)
    diff[i] = a[i]-b[i];
    sum = diff[0]; 
    for(i=1;i<n;i++)
        sum += max(diff[i]-diff[i-1] , (long long) 0); 
    cout<<sum;
    //if current number is bigger than the previous number => extra operations needed
    // also  in a given range the operation can be applied to the entire range only the least element no.of times. 
    //and then the range splits
    //for eg 7 4 5 0 1
    return 0;
}
// A naive method to find maximum of minimum of all windows of 
// different sizes 
#include <bits/stdc++.h> 
using namespace std; 

long long n , k , a[100007];

void printMaxOfMin(long long arr[], long long n , long long k) 
{  
	 long long maxOfMin = INT_MIN; 

		for (long long i = 0; i <= n-k; i++) 
		{  
			long long min = arr[i]; 
			for (int j = 1; j < k; j++) 
			{ 
				if (arr[i+j] < min) 
					min = arr[i+j]; 
			}  
			if (min > maxOfMin) 
			maxOfMin = min; 
		} 
		cout << maxOfMin << " ";  
} 
 
int main() 
{
	cin>>n>>k;
	for(long long i=0;i<n;i++)
	cin>>a[i];
	printMaxOfMin(a, n , k); 
	return 0; 
} 


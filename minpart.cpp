// A Dynamic Programming based C program to partition problem 
#include <stdio.h> 

// Returns true if arr[] can be partitioned in two subsets of 
// equal sum, otherwise false 
bool findPartiion (int arr[], int n) 
{ 
	int sum = 0; 
	int i, j; 
	
	// Caculcate sun of all elements 
	for (i = 0; i < n; i++) 
	sum += arr[i]; 
	
	if (sum%2 != 0) 
	return false; 
	
	bool part[sum/2+1][n+1]; 
	
	// initialize top row as true 
	for (i = 0; i <= n; i++) 
	part[0][i] = true; 
		
	// initialize leftmost column, except part[0][0], as 0 
	for (i = 1; i <= sum/2; i++) 
	part[i][0] = false;	 
	
	// Fill the partition table in botton up manner 
	for (i = 1; i <= sum/2; i++) 
	{ 
	for (j = 1; j <= n; j++) 
	{ 
		part[i][j] = part[i][j-1]; 
		if (i >= arr[j-1]) 
		part[i][j] = part[i][j] || part[i - arr[j-1]][j-1]; 
	}		 
	}	 
	
  // uncomment this part to print table 
	for (i = 0; i <= sum/2; i++) 
	{ 
	for (j = 0; j <= n; j++) 
		printf ("%4d", part[i][j]); 
	printf("\n"); 
	} 
	
	return part[sum/2][n]; 
}	 

// Driver program to test above funtion 
int main() 
{ 
int arr[] = {3, 1, 1, 2, 2, 1}; 
int n = sizeof(arr)/sizeof(arr[0]); 
if (findPartiion(arr, n) == true) 
	printf("Can be divided into two subsets of equal sum"); 
else
	printf("Can not be divided into two subsets of equal sum"); 
getchar(); 
return 0; 
} 


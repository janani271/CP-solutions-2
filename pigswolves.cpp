#include<bits/stdc++.h>
using namespace std;
int n , m , i , j , c ;
char g[100][100]; 
int main()
{
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>g[i][j];
		}
	}

	c=0;

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(g[i][j]=='W')
			{
				if(g[i-1][j]=='P' && i>=1)
				{
					c+=1; 
				}
				else if(g[i+1][j]=='P' && i<n-1)
				{
					c+=1; 
				}
				else if(g[i][j+1]=='P' && j<m-1)
				{
					c+=1; 
				}
				else if(g[i][j-1]=='P' && j>=1)
				{
					c+=1; 
				}
			}
		}
	}
	cout<<c;
	return 0;
}
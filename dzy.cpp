#include<bits/stdc++.h>
using namespace std;

int i , j , n , m;
char g[1000][1000];

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

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(g[i][j]=='.')
			{
				if((i+j)%2==0)
					g[i][j]='B';
				else
					g[i][j]='W';
			}
		}
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<g[i][j];
		}
		cout<<"\n";
	}
	return 0;
}
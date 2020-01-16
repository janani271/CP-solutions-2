#include<bits/stdc++.h>
using namespace std;
long long n , s , t , i , p[1000000] , nom=-1 , c=1 , visited[1000000] , pos; 
int main()
{
	cin>>n>>s>>t;
	for(i=1;i<=n;i++)
	{
		cin>>p[i];
		visited[i]=0;
	}
	
	if(s==t)
		nom=0;
	else 
	{
		pos = s;
		while(!visited[pos])
		{
			visited[pos]=1;
			if(p[pos]==t)
			{
				nom = c;
				break;
			}
			else
			{
				pos = p[pos];
				++c;
			}
		}

	}
	cout<<nom;
	return 0;
}
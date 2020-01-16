#include<bits/stdc++.h>
using namespace std;
long long  n , m , k , i , j , s , nos , visited[1000][1000] , counti , h , e , f;
long long checkx[4]={1,0,0,-1};
long long checky[4]={0,-1,1,0};
char a[1000][1000];

long long valid (long long c , long long d)
{
	if(c>=1 && c<=n && d>=1 && d<=m && a[c][d]=='.' && !visited[c][d]) 
	return 1;
	
	return 0;
}

void DFS(long long q , long long p)
{
	visited[q][p] = 1;
	a[q][p]='R';
	if(counti>=nos)
		{return;}
	
	//cout<<"\n counti :"<<counti<<"\n";
	//x=0;y=0;
    for(h=0;h<4;h++)
    {
    	long long x = q + checkx[h];
    	long long y = p + checky[h];
    	if(counti>=nos)
    	break;
    	cout<<x<<" "<<y<<'\n';
    	if(valid(x,y))
    	{
				counti++;
    			cout<<"\ndfs called for"<<x<<" "<<y<<'\n';
				DFS(x,y);
		}
    }
}

int main()
{
	//cout<<"enter n m k: ";
	cin>>n>>m>>k;
	s=0;
	//cout<<"\nenter maze:";
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			cin>>a[i][j];
			visited[i][j]=0;
			if(a[i][j]=='.')
			{
				s++;
				e= i ; f=j; 
			}
		}
	}
	
		cout<<"\ns: "<<s<<" k: "<<k<<"\n";
		nos=s-k; // no. of usable spaces
		cout<<"\n nos: "<<nos<<"\n";
		counti = 1;
		cout<<e<<" "<<f;
		DFS(e,f);
		for(i=1;i<=n;i++)
		{	
			for(j=1;j<=m;j++)
			{
				
				if(a[i][j]=='.')
					{a[i][j]='X';}
				if(a[i][j]=='R')
					{a[i][j]='.';}
			}
		}

	
	cout<<"\n\n\n";
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			cout<<a[i][j];
		}
		cout<<"\n";
	}


}

#include<bits/stdc++.h>
using namespace std;
long long n , i , m , cur , c , p , j , k ;
char  a[200009] ;

void valid(long long x , long long y , long long z)
{
	if(a[x]=='R')
	{
		if(a[z]=='B')
			a[y]='G';
		else a[y] = 'B';
	}
	if(a[x]=='G')
	{
		if(a[z]=='B')
			a[y]='R';
		else a[y] = 'B';
	}
	if(a[x]=='B')
	{
		if(a[z]=='R')
			a[y]='G';
		else a[y] = 'R';
	}
}
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	i=1;
	m=0;
	while(i<=n)
	{
		cur = i; c=0;
		//cout<<"\n"<<a[i];
		for(j=cur+1;j<=n;j++)
		{
			if(a[j]==a[cur])
				c++;
			else
			{
				p = j;
				break;
			}
		}
		if(c==0)
			c=0;
		else if(c==1)
		{
			m++;
			valid(i,i+1,p);
		}
		else
		{
			if(c%2==1)                          //if odd //r 	r r r b  r r r r b
				m += (c/2)+1;
			else
				m += c/2;
			//cout<<"\nc: "<<c;
			for(k=i+1;k<=i+c;k+=2)
			{
				valid(k-1,k,k+1);
				//cout<<"\nk: "<<k; 	
			}
		}
		i += c;
		i++;
	}
	cout<<m<<endl;
	for(i=1;i<=n;i++)
		cout<<a[i];
	return 0;
}
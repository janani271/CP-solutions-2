#include <bits/stdc++.h>
using namespace std;
#define SIZE 2
#define m 1000000007
long long x , y , z,T,i,j,k,f[150][150][150],g[150][150][150],a,b,c;

void calc()
{
    f[0][0][0]=0;
    g[0][0][0]=1;
    f[1][0][0]=4;
    g[1][0][0]=2;
    f[0][1][0]=5;
    g[0][1][0]=1;
    f[0][0][1]=6;
    f[0][0][1]=1;
    f[1][1][0]=108;
    g[1][1][0]=4;
    f[1][0][1]=120;
    g[1][0][1]=4;
    f[0][1][1]=132;
    g[0][1][1]=4;
    for(i=1;i<=SIZE;i++)
    {
        for(j=1;j<=SIZE;j++)
        {
            for(k=1;k<=SIZE;k++)
            {
                if(min(i-1,min(j-1,k-1))<0)
                { 
                    f[i][j][k] =0;
                    g[i][j][k] += 0;
                }
                else
                {
                    a = ((10*f[i-1][j][k])%m + (4*g[i-1][j][k])%m)%m;
                    b = ((10*f[i][j-1][k])%m + (5*g[i][j-1][k])%m)%m;
                    c = ((10*f[i][j][k-1])%m + (6*g[i][j][k-1])%m)%m;
                    f[i][j][k] += (((a+b)%m)+c)%m;
                    g[i][j][k] += (((g[i-1][j][k])%m+(g[i][j-1][k])%m)%m+(g[i][j][k-1])%m)%m;
                    cout<<"\n"<<f[i][j][k];
                }
                cout<<"\n"<<f[i][j][k];
            }
        }
    }
}
int main() {
	cin>>T;
	calc();
	while(T--)
	{
	    cin>>x>>y>>z;
	    cout<<f[x][y][z]<<endl;
	}
	return 0;
}
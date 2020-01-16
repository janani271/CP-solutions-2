#include<bits/stdc++.h>
using namespace std;
long long t , n , maxi , pos , i , j , c[100004]; 
string s, a, str;
char x;

int countFreq(string &pat, string &txt) 
{ 
	int M = pat.length(); 
	int N = txt.length(); 
	int res = 0; 

	for (int i = 0; i <= N - M; i++) 
	{ 
		int j; 
		for (j = 0; j < M; j++) 
			if (txt[i+j] != pat[j]) 
				break; 
		if (j == M) 
		{ 
		res++; 
		j = 0; 
		} 
	} 
	return res; 
} 

int main()
{
		cin>>t;
		while(t--)
		{
			cin>>n;
			cin>>s;
			maxi=0;
			for(i=0;i<n;i++)
			{
				x=s.at(i);
				a.push_back(x);
				c[i]=countFreq(a, s);
				if(c[i]>=maxi) 
				{
					maxi=c[i];
					pos=i;
					str=a;
				}

			}
			cout<<str<<"\n";
			a.clear();
		}
	}


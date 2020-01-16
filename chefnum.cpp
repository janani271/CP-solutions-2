#include<bits/stdc++.h>
using namespace std;

long long t, n , pos , neg , countpos , countneg , large , small , i ; 
long long a[100009];
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		pos=0;
		neg=0;
		countpos=0;
		countneg=0;
		large=0;small=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>=0)
			{
				pos += a[i];
				countpos++;
			}
			else
			{
				neg += a[i];
				countneg++;
			}
		}

		if(countneg==0)
		{
			large=countpos ; small = countpos;
		}
		else if(countpos==0)
		{
			large=countneg; small=countneg;
		}
		else if(countneg>=countpos)
		{
			large=countneg ;
			small = countpos;
		}
		else if(countpos>countneg)
		{
			large=countpos; small=countneg;
		}

		cout<<large<<" "<<small<<"\n";
	}
}

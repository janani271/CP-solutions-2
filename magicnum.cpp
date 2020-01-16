#include<bits/stdc++.h>
using namespace std;
char a[15]; 
long long  len , i , flag ; 
int main()
{
	cin>>a;
	len = strlen(a);
	if(a[0]!='1')
		cout<<"NO";
	else
	{
		flag=0;
		for(i=1;i<len;i++)
		{
			if(a[i]!='1' && a[i]!='4')
			{
				cout<<"NO";
				return 0;
			}
		}

		for(i=1;i<len;i++)
		{
			if(a[i]=='4')
			{
				if(a[i-1]=='1')
					continue;
				else if(a[i-2]=='1')
					continue;
				else
				{
					cout<<"NO";
					return 0;
				}
			}
		}

		cout<<"YES";
	}


	return 0;
}
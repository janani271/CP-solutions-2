#include<bits/stdc++.h>
using namespace std;

long long n , i , p[1000000] , a[1000000] , s , tot , c , flag;
vector<long long>v1;
vector<long long>v2;

int main()
{
	cin>>n;
	flag=1;
	p[0]=0;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		p[i] = p[i-1]  + a[i];
		if(a[i]!=0)
			flag=0;
	} 

	if(p[n]%3!=0)
		cout<<"0";
	else if(p[n]==0)
	{
		if(!flag)
			cout<<"1";
		else
		{
			n = n-2;
			n = n*(n+1)/2;
			cout<<n;
		}
	}
	else
	{
		s = p[n];
		//cout<<"\ns: "<<(2*s)/3<<"\n";
		tot = 0;
		for(i=1;i<=n;i++)
		{
			if(p[i]==(s/3))
			{
				v1.push_back(i);
				//cout<<"\nv1 : "<<i;
			}
			if(p[i] == (2*s)/3)
			{
				v2.push_back(i);
				//cout<<"\nv2 : "<<i;
			}
		}

		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end());

		vector<long long>::iterator it;

		// for(it=v2.begin();it!=v2.end();++it)
		// {
		// 	cout<<"\n"<<*it;
		// }

		for(it=v1.begin();it!=v1.end();++it)
		{
			c = upper_bound(v2.begin(),v2.end(),*it) -  v2.begin();
			//cout<<"\nc: "<<c;
			c = v2.size()-c;
			tot += c;
		}	

		//cout<<"\n";
		cout<<tot;			
	}
	return 0;
}
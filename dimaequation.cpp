#include<bits/stdc++.h>
using namespace std;
set<long long>s;

long long a , b , c , i , num , sum , temp ;

long long calc_power(long long x , long long y)
{
	long long ans =1;
	for(long long j=1;j<=y;j++)
	{
		ans = ans*x;
	}
	return ans;
}

int main()
{
	cin>>a>>b>>c;

	for(i=1;i<=81;i++)
	{
		num = ((b*(calc_power(i,a)))+c);
		temp=num;
		sum=0;
		while(temp!=0)
		{
			sum += temp%10;
			temp = temp/10;
		}
		if(sum==i && num>0 && num<1000000000)
		{
			s.insert(num);
		}
	}

	if(s.begin()!=s.end())
	{
		cout<<*s.end()<<"\n";
		for(auto itr=s.begin();itr!=s.end();++itr)
		cout<<*itr<<" ";
	}
	else
	{
		cout<<"0";
	}

	return 0;
}
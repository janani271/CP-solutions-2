#include<bits/stdc++.h>
using namespace std;
string recipe;
long long nb=0 , ns=0 , nc=0 , pb=0 , ps=0 , pc=0 , r , b=0 , s=0 , c=0;
long long l , h , mid , prev_val , cost , br=0 , sr=0 , cr=0 ,ans=0 , need_b ,need_c , need_s;
unsigned long long i;
int main()
{
	cin>>recipe;
	b=0;s=0;c=0;
	for(i=0;i<recipe.size();i++)
	{
		if(recipe[i]=='B')
			b++;
		if(recipe[i]=='C')
			c++;
		if(recipe[i]=='S')
			s++;
	}	
	cin>>nb>>ns>>nc;
	cin>>pb>>ps>>pc;
	cin>>r;

	l = 0; h = 10000000000000; prev_val=0;
	while(l<=h)
	{
		mid = (l+h)/2;

		br = mid*b;
		sr = mid*s;
		cr = mid*c;

		need_b=0; need_c=0; need_s=0;

		if(br>=nb)
			need_b = br-nb;
		if(sr>=ns)
			need_s = sr-ns;
		if(cr>=nc)
			need_c = cr-nc;

		cost = (need_b*pb) + (need_c*pc) + (need_s*ps);

		if(cost>r)
			h=mid-1;
		else
		{
			l=mid+1;
			if(mid>prev_val)
				prev_val=mid;
		}
	}

	cout<< prev_val;

}
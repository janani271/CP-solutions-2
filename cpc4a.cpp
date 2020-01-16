#include<bits/stdc++.h>
using namespace std;
long long r,l,a,ans;
int main()
{
	cin>>l>>r>>a;
	if(l>r)
		swap(l,r);
	if(l+a<=r)
		ans = 2*(l+a);
	else
		ans = l + r + (r-l) + ((a-(r-l))/2)*2;
	cout<<ans;
	return 0;
}
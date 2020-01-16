#include<bits/stdc++.h>
using namespace std;
long long r , g , b ,  n ,rm , gm , bm ;
int main()
{
	cin>>r>>g>>b;

	rm = r%3 , gm = g%3 , bm = b%3;

	n = (r/3) + (g/3) + (b/3) + min(rm,min(gm,bm));

	if((rm==2 && gm==2 && bm==0 && b!=0) || (rm==2 && bm==2 && gm==0 && g!=0) || (bm==2 && gm==2 && rm==0 && r!=0))
		n++;
	cout<<n;
	return 0;
}
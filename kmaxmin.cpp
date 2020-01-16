#include<bits/stdc++.h>
using namespace std;
#define INFINITE 1000000009
long long n , k , i , a[100004], tree[400099], tree1[400099], ans, maxi, mini, low, high, p;
void build(long long node, long long start, long long end) 
{
    if(start == end)
        tree[node] = a[start];
    else
    {
        long long mid = (start + end) / 2;
        build(2*node, start, mid);
        build(2*node+1, mid+1, end);
        tree[node] = min(tree[2*node],tree[2*node+1]);
    }
}

long long query(long long node, long long start, long long end, long long l, long long r)
{
    if(r < start or end < l)
        return INFINITE;
    if(l <= start and end <= r)
        return tree[node];
    long long mid = (start + end) / 2;
    long long p1 = query(2*node, start, mid, l, r);
    long long p2 = query(2*node+1, mid+1, end, l, r);
    return min(p1,p2);
}

void build1(long long node, long long start, long long end)
{
    if(start == end)
        tree1[node] = a[start];
    else
    {
        long long mid = (start + end) / 2;
        build1(2*node, start, mid);
        build1(2*node+1, mid+1, end);
        tree1[node] = max(tree1[2*node],tree1[2*node+1]);
    }
}

long long query1(long long node, long long start, long long end, long long l, long long r)
{
    if(r < start or end < l)
        return 0;
    if(l <= start and end <= r)
        return tree1[node];
    long long mid = (start + end) / 2;
    long long p1 = query1(2*node, start, mid, l, r);
    long long p2 = query1(2*node+1, mid+1, end, l, r);
    return max(p1,p2);
}

int main()
{
	long long mid;
	cin>>n>>k;
	for(i=1;i<=n;i++)
		cin>>a[i];
	build(1,1,n);
	build1(1,1,n);
	ans=0;

	for(i=1;i<=n;i++)
	{
		low = i;
		high = n;
		p=0;
		while(low<=high)
		{
			mid = (low+high)/2;
			//cout<<"\nlow: "<<low<<"\thigh: "<<high<<"\tmid: "<<mid;
			mini = query(1,1,n,i,mid);
			maxi = query1(1,1,n,i,mid);
			if(maxi-mini<=k)
			{
				low = mid+1;
				if(mid>p)
					p=mid;
			}
			else
				high = mid-1;
			//cout<<"\ni: "<<i<<"\tmaxi: "<<maxi<<"\tmini: "<<mini<<"\tp: "<<p;
		}
		//cout<<"\ni : "<<i<<"\tp : "<<p;
		ans += (p-i+1);
	}
	//cout<<endl;
	cout<<ans;
	return 0;
}
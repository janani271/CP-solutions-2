#include<bits/stdc++.h>
using namespace std;

	vector<long long>G[100006];
	vector<long long>v[100006];
	map<long long, long long> m;
	long long i , a[100006] , n , c , j ;
	bool visited[100006];
	vector<long long>::iterator it; 
	
void DFS(int q , int z)
{
	//cout<<q<<" ";
	v[z].push_back(q);
	visited[q] = true;
	vector<long long>::iterator p;
    for(p= G[q].begin(); p != G[q].end() ; p++)
    {
        if(!visited[*p])
            DFS(*p,z);
    }
}

int main()
{

	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	
	
	for(i=1;i<=n;i++)
	{
		m[a[i]]=i;
	}

	sort(a+1,a+n+1);

	for(i=1;i<=n;i++)
	{
		G[i].push_back(m[a[i]]);
		G[m[a[i]]].push_back(i);
		//cout<<"\n key: "<<a[i]<<"  value: "<<m[a[i]];
	}

	for(i=1;i<=n;i++)
	{
		visited[i]=false;
	}
	
	c=0;
	j=1;
	for(i=1;i<=n;i++)
	{
		if(visited[i]==false)
		{
			DFS(i,j);
			c++;
			j++;
		}
	}

	cout<<c<<"\n";
	for(i=1;i<j;i++)
	{
		cout<<v[i].size()<<" ";
		for(it=v[i].begin();it!=v[i].end();++it)
			cout<<*it<<" ";
		cout<<"\n";	
	}	
}



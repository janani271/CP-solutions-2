#include<bits/stdc++.h>
using namespace std;
vector <long long> g[1000];
int m  , n , i , flag=0 , x , sn , u , v;
bool visited[500];

void DFS(int q)
{
    
    visited[q] = true;
    cout<<"\n"<<q<<"\n";
    if(q==x)
    	flag=1;
    vector<long long>::iterator it; 
    for(it=g[q].begin(); it!=g[q].end(); it++)
    {
        if(!visited[*it])
            DFS(*it);
    }
}

int main()
{
	cout<<"enter m and n: \n";
	cin>>m>>n;
	for(i=1;i<=m;i++)
	{
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	cout<<"enter x and sn:\n";
	cin>>x;
	cin>>sn; //starting node 

	for(i=1;i<=n;i++)
	{
		visited[i]=false;
	}

	for(i=1;i<=n;i++)
	{
		if(visited[i]==false)
		{
			DFS(i);
		}
	}

	if(flag==1)
		cout<<"Found";
	else
		cout<<"Not Found";

}

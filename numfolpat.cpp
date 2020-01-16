#include<bits/stdc++.h>
using namespace std;
long long n , t , i;
stack<long long>s;
string str , res ;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>str;

        if(n>=9)
            cout<<"-1"<<endl;
        else
        {
            res = "";
            for(i=0;i<=n;i++)
            {
                if(str[i]=='I')
                {
                    while(!s.empty())
                    {
                        res += to_string(s.top());
                        s.pop();
                    }
                    res += to_string(i+1);
                }
                else 
                    s.push(i+1);
            }
            while(!s.empty())
                    {
                        res += to_string(s.top());
                        s.pop();
                    }

            cout<<res<<endl;
        }
    }
    return 0;
}
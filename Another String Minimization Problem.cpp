Problem Description: https://codeforces.com/contest/1706/problem/A
Time Complexity: o(n)
Space Complexity: o(1)
  
  #include <iostream>
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    string s;
    s.append(m,'B');
    for(int i=0;i<n;i++)
    {
        int x=v[i]-1;
        int y=m+1-v[i]-1;
        if(x<y)
        {
            if(s[x]=='B')
            {
                s[x]='A';
            }
            else if(s[x]=='A' and y<m and s[y]=='B')
            {
                s[y]='A';
            }
        }
        else if(x>y)
        {
            if(s[y]=='B')
            {
                s[y]='A';
            }
            else if(s[y]=='A' and x<m and s[x]=='B')
            {
                s[x]='A';
            }
        }
        else
        {
            s[y]='A';
        }
    }
    cout<<s<<endl;
    return;
    
}

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       solve();
   }

    return 0;
}

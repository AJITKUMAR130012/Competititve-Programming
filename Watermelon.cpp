Problem Description: https://codeforces.com/problemset/problem/4/A
Time Complexity: o(1)
Space Complexity: o(1)

#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      string s;
      cin>>s;
      int n=s.length();
      if(n>10)
      {
      s.erase(s.begin()+1,s.begin()+n-1);
      s.insert(1,to_string(n-2));
      cout<<s<<endl;
      }
      else
      {
          cout<<s<<endl;
      }
    }
  return 0;
  
}

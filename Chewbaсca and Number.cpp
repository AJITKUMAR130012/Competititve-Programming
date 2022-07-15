Problem Description: https://codeforces.com/contest/514/problem/A
Time Complexity: o(logn) ---> number of digit
space complexity: o(logn)  --> space cmplexity

#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long n;
   cin>>n;
   string s=to_string(n);
   int l=s.length();
   for(int i=0;i<l;i++)
   {
       if(i==0 and s[i]=='9') continue;
       if(s[i]>52)
       {
           s[i]=57-s[i]+48;
       }
   }
   cout<<s<<endl;
   return 0;
  
}

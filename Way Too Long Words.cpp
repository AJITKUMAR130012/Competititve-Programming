/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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

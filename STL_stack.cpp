//#include<iostream>
//#include<stack>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  stack<int>s;
   s.push(10);
  cout<<s.top()<<endl;
  s.push(3);
  s.push(22);
  cout<<s.top()<<endl;
  s.pop();
  cout<<s.top()<<endl;

  cout<<s.empty();
  
  
  return 0;
}
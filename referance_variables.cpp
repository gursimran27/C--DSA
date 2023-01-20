#include<iostream>
using namespace std;
int main()
{
int x=10;
int& y=x;

y=20;
cout<<x<<" "<<y<<endl;

x=11;
cout<<x<<" "<<y<<endl;
return 0;
}
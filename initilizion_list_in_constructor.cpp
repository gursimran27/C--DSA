#include<iostream>
using namespace std;
# define rep(i,a,b) for(int i=a;i<b;i++)
 

 class A
 {
    int a;      
    int b;       
    public:    //note that a is declared first than b
    A(int x,int y):   
      // a(x),b(2*x)   this works 
     // a(x),b(3*a) this also works
       a(y), b(x) //this also works
      //b(x),a(y) this also works
     // b(x),a(b)// not work...... a is getting garbage value because in decleration a was declared first than b
    {
          cout<<"a="<<a<<" "<<"b="<<b<<endl;
    }


    /*this also work
    A(int x,int y):
    a(x)
    {
      b=y;
    }
    */
 };


int main()
{
     A o(6,9);
return 0;
}
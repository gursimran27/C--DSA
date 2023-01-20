#include<iostream>
using namespace std;
# define rep(i,a,b) for(int i=a;i<b;i++)
 
//multiple
 class A
 {
    int a;
    public:
    A(int x)
    {
        a=x;
    }

    void show_a()
    {
        cout<<a<<endl;
    }
 };


 class B
 {
    int b;
    int c;
    public:
    B(int x,int y)
    {
        b=x;
        c=y;
    }

    void show_bc()
    {
        cout<<b<<" "<<c<<endl;
    }

};


class C:public B,public A
{
    int d;
    public:
    C(int x,int y):
    A(2*x),B(y,x) //here we can also write d(x+y);
    {
          d=x+y;   
    }

    void show()
    {
        show_a();
        show_bc();
        cout<<d<<endl;
    }
};



int main()
{
   C o(2,3);
   o.show();


return 0;
}
#include<iostream>
using namespace std;

class A
{
    int a;
    public:
    void set()
    {
        a=10;
    }
    void show()
    {
        cout<<"a= "<<a<<endl;
    }
};

class B:public A
{
    int b;
    public:
    void set()
    {
        b=20;
    }
    void show()
    {
        cout<<"b= "<<b<<endl;
    }
};
int main()
{
    B o;
    o.show();
    o.set();
    o.show();    //here the object is of B of it gives preferance to set() and show() function of B
     
    o.A::show();
    o.A::set();
    o.A::show();

    //we can also write o.B::show(); .....this will call show() of class B
return 0;
}
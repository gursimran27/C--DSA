#include<iostream>
using namespace std;

class A
{
    int a;
    public:
    int b;
    A()
    {
        a=10;
        b=5;
    }

   int get_a()
    {
        return a;
    }
};

class B:public A
{
     public:
     int c;
     void mul()
     {
        c=b * get_a();
     }

     void display()
     {
        cout<<"a="<<get_a()<<" b="<<b<<" c="<<c<<endl;
     }
};



int main()
{
      B o;
      o.display();
      cout<<endl;
      o.mul();
      o.display();
return 0;
}
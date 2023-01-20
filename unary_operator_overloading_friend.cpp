#include<iostream>
using namespace std;

class A
{
    int a;
    public:
    A()
    {
        a=8;
    }

    void display()
    {
        cout<<a<<endl;
    }

    friend void operator -(A&);
};

void operator-(A &t)
{
    t.a=-t.a;
}


int main()
{
   A x;
   x.display();
   -x;//here func is called withod an object and x is passeed as argument
   x.display();
return 0;
}
#include<iostream>
using namespace std;

class B;

class A
{
    int x;
    public:
    A()
    {
        x=50;
    }
    friend void sum(A,B);
     friend void sum2(A&,B& );
};


class B
{
    int y;
    public:
    B()
    {
        y=40;
    }
    friend void sum(A,B);
    friend void sum2(A&,B&);

    void display()
    {
        cout<<y<<endl;
    }
};


void sum(A t1,B t2)
{
    t2.y=t1.x+t2.y;
}


   void sum2(A &t1,B &t2)
{
    t2.y=t1.x+t2.y;
}


int main()
{
    A a;
    B b;
   b.display();
    sum(a,b);
    b.display(); //here y is still 40

    cout<<endl;

    b.display();
    sum2(a,b);
    b.display();//now y is modified


return 0;
}
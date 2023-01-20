#include<iostream>
using namespace std;

class B;
class A
{
    int a;
    public:
    A()
    {
        a=20;
    }

    void display()
    {
        cout<<a<<endl;
    }
    void operator +(B);
};


class B
{
    int b;
    public:
    B()
    {
        b=2;
    }

    friend void A::operator+(B);
};


void A:: operator+(B t)
{
    a=a+t.b;
}






//binary operator overloading using friend func

class D;//forward decleration

class C
{
    int c;
    public:
    C()
    {
        c=5;
    }

    void display()
    {
        cout<<c<<endl;
    }
    
    friend void operator-(C&,D&);
};


class D
{
    int d;
    public:
    D()
    {
        d=6;
    }

    friend void operator-(C&,D&);
};

void operator-(C& t1,D& t2)
{
   t1.c=t1.c-t2.d;
}





int main()
{
    A x1,x2;
    B y;
cout<<"by making member func as a friend of other class"<<endl;
    x1+y;
    x1.display();
    //same can be done by making both classes as friend .....friend class A;



   cout<<"by making friend of both classes"<<endl;
   C l;
   D m;
   l-m;
    l.display();
return 0;
}
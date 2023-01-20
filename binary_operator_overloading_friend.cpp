#include <iostream>
using namespace std;

class A
{
    int a;
    int b;

public:
    A()
    {
        a = 10;
        b = 20;
    }

    void display()
    {
        cout << a << " " << b << endl;
    }

    friend void operator +(A&,A&);
    friend void operator +(A&,int val);
    friend void operator +(int val,A&);
};


void operator+(A& t1,A& t2)
{
    t1.a+=t2.a;
    t1.b+=t2.b;
}


void operator+(A& t1,int val)
{
    t1.a+=val;
    t1.b+=val;
}

void operator+(int val,A&t1)
{
    t1.a+=val;
    t1.b+=val;
}




int main()
{
    A x1,x2;
    x1.display();
    x2.display();
    x1+x2;//here both x1,x2 are passed as arguments
    x1.display();

  x1+3;//here both x1,3 are passed as arguments
    x1.display();

    3+x2;// so we can say that operator overloading using friend can perform both x+3 and 3+x  because both 3 and x are passed as arguments
    x2.display();
    return 0;
}
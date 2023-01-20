#include <iostream>
using namespace std;

class B;
class A
{
    int x;

public:
    A()
    {
        x = 30;
    }

    A sum(A ,B );

    void show()
    {
        cout<<x<<endl;
    }
};

class B
{
    int y;

public:
    B()
    {
        y = 20;
    }
    friend A A::sum(A,B);
};


A A :: sum(A t1,B t2)
{
    A a;
        //a.x=t1.x+t2.y;
        x=t1.x+t2.y;
     // return a;
        return *this;//mean it return the object which is caliing this member func i.e (a)
}
int main()
{

     A a;
     A a1;
     B b;
     a.show();
     a1.show();
     
      cout<<endl;
     a1=a.sum(a,b);
     a.show();
     a1.show();

    return 0;
}
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
        //x=t1.x+t2.y;
        a.x=t1.x+t2.y;
               //the first one the calling object is changed 
               //2nd one the a is changed
        return a;
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
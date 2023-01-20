#include <iostream>
using namespace std;

class B; // forward decleration

class A
{
    int x;

public:
    A()
    {
        x = 10;
    }

    void sum(A,B);// member func prototype
};

class B
{
    int y;

public:
    B()
    {
        y = 10;
    }

    friend void A::sum(A,B);//with this we have grant sum membr function of class A to access private or protected data of class B
};

void A::sum(A t1,B t2)//this is member fuction of class A
{
    cout << t1.x+t2.y<<endl;
}


int main()
{


   A a;
   B b;
    a.sum(a,b);//we have used dot operator as sum is a member function not a simple function
    return 0;
}

//same can be done by making class A as a friend of class B
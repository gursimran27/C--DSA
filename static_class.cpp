#include<iostream>
using namespace std;

class A
{
    int x;
    static int y;

    public:

    A(int a)
    {
        x=a;
        y++;

    }

    void display()
    {
        cout<<x<<" "<<y<<endl;
    }


    void show(A t)
    {
        cout<<t.x<<" "<<t.y<<endl;
    }


    static void lol()
    {
        //not able to access this cout<<x<<endl; because x is not static
        cout<<y<<endl;
    }


    static void lol2(A t)
    {
        cout<<t.y<<" "<<t.x<<endl;
        //here this static member func can also access non static data member
    }
};

int A::y; //static data member decleration



int main()
{
   //A a(10);
    // a.show(a);
    // a.display();
    //A b(20);
    // a.show(a);
    // a.show(b);
    // a.display();
    // b.display();


// A a(10);
// A::lol();
// A b(20),c(30);
// A::lol();


// A a(10);
// A::lol2(a);
// A b(20);
// A::lol2(a);
// A::lol2(b);


return 0;
}
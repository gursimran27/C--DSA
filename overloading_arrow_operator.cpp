#include <iostream>
using namespace std;

class A
{

    int a;

 public:
    A()
    {
        a = 10;
    }

    void show()
    {
        cout << a << endl;
    }

    A* operator->() // A* this pointer return type
    {
        return this; // it will return the caliing object address
    }
};
int main()
{
    A o;
    A *ptr = &o;
    ptr->show(); // using pointer

    o->show(); // using overloaded arrow opeartor
    return 0;
}
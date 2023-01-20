#include <iostream>
using namespace std;

class A
{
    int a;

public:
    int b;

    A()
    {
        a = 10;
        b = 5;
    }

    int get_a()
    {
        return a;
    }
};

class B : private A
{
    int c;

 public:
    // c=b * get_a(); it does not work as private data member can be access by member  function only

    void mul()
    {
        c = b * get_a();
    }
    void show()
    {
        cout << "a=" << get_a() << " b=" << b << " c=" << c << endl;
    }
};
int main()
{
    B o;
    o.show();
    o.mul();
    cout << endl;
    o.show();

    return 0;
}
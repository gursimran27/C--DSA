#include <iostream>
using namespace std;

class A
{
    int a;

public:
    int b;

    void setdata()
    {
        a = 10;
        b = 5;
    }

    int get_a()
    {
        return a;
    }
};

class B : public A
{
public:
    int c;

    void show()
    {
        cout << c << endl;
    }
};
int main()
{
    B o;
    o.setdata();
    o.c = o.b * o.get_a();
    o.show();

    o.c = 3;
    o.show();

    o.b = 10;
    o.c = o.b * o.get_a();
    o.show();

    return 0;
}
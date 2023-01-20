#include<iostream>
using namespace std;

class A
{
    int a;
    static int b;

    public:
    A()
    {
        a=b;
        b++;
    }

    void show()
    {
        cout<<"a="<<a<<endl<<"b="<<b<<endl;
    }
};

int A::b;
int main()
{
    A o;
    o.show();
return 0;
}
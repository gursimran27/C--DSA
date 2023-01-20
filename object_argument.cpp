#include<iostream>
using namespace std;

class A
{
    int a;
    public:

    void copy(A &t)
    {
        a=t.a;
    }
    void setval(int x)
    {
        a=x;
    }

    void getval()
    {
        cout<<a<<endl;
    }
};



int main()
{
    A a,b;
    a.setval(10);
    b.setval(9);
    b.getval();
    b.copy(a);
    b.getval();


return 0;
}
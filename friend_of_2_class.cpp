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
    friend void sum(A, B);
    friend void swap(A &, B &);
    void display()
    {
        cout << x << endl;
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

    void display()
    {
        cout << y << endl;
    }
    friend void sum(A, B);
    friend void swap(A &, B &);
};

void sum(A t1, B t2) // this is friend of two class
{
    cout << t1.x + t2.y << endl;
}

void swap(A &t1, B &t2) // friend of 2 class
{
    int temp = t1.x;
    t1.x = t2.y;
    t2.y = temp;
}

int main()
{
    A a;
    B b;
    // sum(a,b);
    a.display();
    b.display();
    swap(a, b);
    a.display();
    b.display();

    return 0;
}
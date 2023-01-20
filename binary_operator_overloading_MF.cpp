#include <iostream>
using namespace std;

class A
{
    int real;
    int img;

public:
    A()
    {
        real = 0;
        img = 0;
    }

    A(int a, int b)
    {
        real = a;
        img = b;
    }

    void display()
    {
        cout << real << " +i " << img << endl;
    }

    A operator+(A t)
    {
        A temp;
        temp.real = real + t.real;
        temp.img = img + t.img;
        return temp;
    }

    A operator-(int val)
    {
        A temp;
        temp.real = real - val;
        temp.img = img - val;
        return temp;
    }
  
   

};
int main()
{
    A x1(2, 4), x2(4, 4), x3,x4,x5;

    x1.display();
    x2.display();
    x3.display();

    x3 = x1 + x2; // x1 is calling and x2 is passing as arguent
    x3.display();
    x4.display();
    x4=x1-1;//here 1 is passes as argument
   // x5=1-x1;  this will not work as 1 is not object so 1 is not able to call member func
    x4.display();
    return 0;
}
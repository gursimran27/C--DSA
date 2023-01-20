#include<iostream>
using namespace std;

class A
{
    int a;
    public:
    A()
    {
        a=22;
    }
    void operator -(); 
    A operator +();
    void display()
    {
        cout<<a<<endl;
    }
};


void A:: operator-()
{
    a=-a;
}


A A:: operator+()
{
    A temp;
   temp.a=+10;
    return temp;
}


int main()
{
  A x,y;
  x.display();
-x;
  
  //x-; //it is not working
  x.display();
y.display();
y=+x;
y.display();
x.display();
return 0;
}
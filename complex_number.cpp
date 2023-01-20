#include<iostream>
using namespace std;

class A
{
    int real;
    int img;
    public:
    A()
    {

    }

    A(int a, int b)
    {
        real=a;
        img=b;
    }

    display()
    {
        cout<<real<<" +i "<<img<<endl;
    }

    void sum(A t1,A t2)
    {
        
        real=t1.real+t2.real;
     img=t1.img+t2.img;
        
    }

    friend A sum(A&,A&);
};

A sum(A & t1,A& t2)
{
    A temp;
    temp.real=t1.real+t2.real;
    temp.img=t1.img+t2.img;
    return temp;
}
int main()
{
   A x1(2,3),x2(3,2),x3,x4;
   x1.display();
    x2.display();
     x3.display();

    x3.sum(x1,x2);
    x1.display();
    x2.display();
     x3.display();


     cout<<"using friend func"<<endl;
   x4=sum(x1,x3);
   x4.display();
return 0;
}
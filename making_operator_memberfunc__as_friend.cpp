#include<iostream>
using namespace std;
# define rep(i,a,b) for(int i=a;i<b;i++)
 class B;
 class A
 {
    int a;
    public:
    A(int x):a(x)
    {
    }

    //operator func as a member func
    void operator +(B&);
 };

 class B
 {
    int b;
    public:
    B(int y):b(y){}

    friend void A::operator+(B&);

    void show_b()
    {
        cout<<"b is= "<<b<<endl;
    }
 };


 //operator fuunc 

void A::operator +(B &t) //it is a member func of class A
 {
    t.b=a+t.b;
 }


int main()
{
    A o1(10);
    B o2(30);
    o2.show_b();
    //o1+o2;
        //or
    o1.operator+(o2);  
    o2.show_b();
return 0;
}
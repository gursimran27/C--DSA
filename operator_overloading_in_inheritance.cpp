#include<iostream>
using namespace std;
# define rep(i,a,b) for(int i=a;i<b;i++)
 
 class A
 {
    int a; // the private attributes are not inheriated
   public:
    void set_a()
    {
        a=20;
    }
    int get_a()
    {
        return a;
    }
 };


 class B:virtual private A
 {
    int b;
    public:
     void set()
     {
        set_a();
        b=40;
     }
    void show()
    {
        cout<<"a= "<<get_a()<<endl<<"b= "<<b<<endl;
    }

    friend void operator +(B&);
 };


 void operator +(B &t2)
 {
    t2.b= t2.get_a() + t2.b;
 }
int main()
{
    B o1;
    o1.show();
    o1.set();
    o1.show();
   // operator +(o1);
    //or
      +o1;
    o1.show();


return 0;
}
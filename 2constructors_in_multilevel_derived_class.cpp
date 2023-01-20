#include<iostream>
using namespace std;
# define rep(i,a,b) for(int i=a;i<b;i++)
//multilevel
class A
{
    int a;
    public:
    A()
    {
        cout<<"A constructor"<<endl;
    }

    ~A()
    {
        cout<<"A distructor"<<endl;
    }
};


class B: public A 
{
    int b;
    public:
    B()
    {
          cout<<"B constructor"<<endl;
    }
       
    ~B()
    {
        cout<<"B distructor"<<endl;
    }
};


class C: public B
{
    int c;
    public:
    C()
    {
          cout<<"C constructor"<<endl;
    }
      C(int a)
      {
        c=a;
      }

    ~C()
    {
        cout<<"C distructor"<<endl;
        cout<<"C para"<<endl;
    }
};


int main()
{

    C obj;

    cout<<endl;
    C obj1(12);
   
    

return 0;
}
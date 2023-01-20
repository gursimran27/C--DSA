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

        A(int x)
        {
            a=x;
            cout<<"A para"<<endl;
        }
    ~A()
    {
        cout<<"A distructor"<<endl;
    }
};


class B: public A //as A is grand base of Class C so C is not able to initilize it using parmeterized constructors //but if i write here virtual public A then it is working
{
    int b;
    public:
    B()
    {
          cout<<"B constructor"<<endl;
    }
        B(int x)
        {
            b=x;
            cout<<"B para"<<endl;
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
       C(int x,int y):
       B(2*x)     //A(y) not working because A is not direct base class of C
        {
            c=x+y;
            cout<<"C para"<<endl;
        }

    ~C()
    {
        cout<<"C distructor"<<endl;
    }
};


int main()
{

    C obj;
    cout<<endl;
  C obj1(2,4);
    

return 0;
}
   #include<iostream>
using namespace std;
# define rep(i,a,b) for(int i=a;i<b;i++)
//multiple
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


class B
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


class C: public B, public A  //here in decleration B is inheriated first than A
{           //also use virtual keyword and see results .....virtal base classes are invoked first
    int c;
    public:
    C()
    {
          cout<<"C constructor"<<endl;
    }
       C(int x,int y):
       A(2*x),B(y)               
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
//     cout<<endl;
   C obj1(2,4);
    

return 0;
}
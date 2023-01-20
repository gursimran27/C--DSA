#include<iostream>
using namespace std;

class A
{

    public:
    A()
    {
        cout<<"default"<<endl;
    }

    A(int a)
    {
        cout<<"parameterised"<<endl;
    }


    ~A()
    {
        cout<<"destructors"<<endl;
    }
};



class B
{
    int roll;
    public:

   B()
   {

   }
void get()
{
    roll=1;
}

      
    B(B &t)
    {
        roll=t.roll;
    }

    void display()
    {
        cout<<roll<<endl;
    }
};

int main()
{
    // A a;
    // A b(10);

   
   B a;
   a.get();
   a.display();
   B b(a);
   b.display();


return 0;
}
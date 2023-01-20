#include<iostream>
using namespace std;

class A
{
    int a;
    public:

    void set(int x)
    {
        a=x;
    }

    void get()
    {
        cout<<a;
    }

    //friend mean that the func can access private data
    friend void setval(A &t,int x );//we have use refrance variables here becaue the friend func is not a member func so it has no this pointer ....so the friend functions argument is a copy of object...so we pass object by referance so that any changes done would reflect in  actual object
    friend void getval(A &t);
};


void setval(A &t,int x)
{
    t.a=x;
}

void getval(A &t)
{
    cout<<t.a<<endl;
}



int main()
{
   A b;
  // b.set(10);
   setval(b,5);
   //b.get();
  getval(b);

  
return 0;
}
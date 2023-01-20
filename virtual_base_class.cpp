#include<iostream>
using namespace std;
# define rep(i,a,b) for(int i=a;i<b;i++)
 

class A
{
    int a;
    public:
    void set_a()
    {
        a=10;
    }

    void show()
    {
        cout<<a<<" ";
    }
};

class B:public virtual A
{
    int b;
    public:
    void set_b()
    {
        b=20;
    }
    void show()
    {
        cout<<b<<" ";
    }
};

class C:virtual public A
{
    int c;
    public:
    void set_c()
    {
        c=5;
    }
    void show()
    {
        cout<<c<<" ";
    }
};


class D: public B,public C
{
  int d;
  public:
  void set_all()
  {
    set_a();//this will not work if i had not used virtual keyword
    set_b();
    set_c();
  }
  
  void show_all()
  {
    A::show();
    B::show();
    C::show();
    
  }
};



int main()
{
     D obj;
     obj.show_all();
     obj.set_all();
     cout<<endl;
     obj.show_all();

return 0;
}
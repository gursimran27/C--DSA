#include<iostream>
using namespace std;

class A
{
    int a;
    void set()
    {
        int x;
        cout<<"what"<<endl;
        cin>>x;
        a=x;
    }

    public:
    void get()
    {
        cout<<a<<endl;
    }

    void modify()
    {
           set();
    }
};


int main()
{
   A o;
   o.get();//garbage value

  // o.set();  //not able to access
  
  o.modify();
  o.get();

return 0;
}
#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 

 class A
 {
    public:
    void func(int a)
    {
        cout<<a<<endl;
    }

    void func()
    {
        cout<<"this is in A class\n";
    }
 };

 class B:public A
 {
    public:
    void func()
    {
        cout<<"this is in class B"<<endl;
    }
 };


int main()
{
    B obj;
    obj.func();
    obj.A::func(10);
    obj.A::func();
                    //obj.func(10);   error
     
return 0;
}
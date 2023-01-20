#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 

 class A
 {
    int a;
    public:
    A()
    {
        a=10;
    }

   virtual void display()
   {
    cout<<a<<endl;
   }
 };



 class B:public A
 {
        int b;
        public:
        B()
        {
            b=21;
        }
            private:
        void display()
        {
            cout<<b<<endl;
        }
 };
int main()
{
    A *ptr;
    B o;
    ptr=&o;
    ptr->display();  //though dislay in derived class is private but it can be accessed outside the class because the access specifier is noticed at compile time but here we have late bimding so no check for access specifier

                //by dynamic memoery allocation
        A *ptr1=new B;
        ptr1->display();


return 0;
}
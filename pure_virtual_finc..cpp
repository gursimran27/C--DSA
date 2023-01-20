#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

class A
{
    protected:
    int a;  //a would be inheriated protectively
    public:
    A(int x):a(x){}

   virtual void show()=0; //pure virtual func
};

class B:public virtual A
{
    int b;
    public: 
    B(int x):A(2*x),b(x){}

    void show()  //as i had used pure virtual func ...so if i would not re define show() func thar compiler would through some error....see by commenting out this show() func
    {
        cout<<a<<" "<<b<<endl;
    }
};


int main()
{
    B o1(4);

     
    A *base_ptr=&o1;
    // base_ptr->a=89;  //not able to access because (a) is in protected in derived class
     base_ptr->show();






    

return 0;
}

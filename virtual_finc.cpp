#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

class base
{
    public:
    int a;
   virtual void show()
    {
        cout<<a<<endl;
    }

};

class dev:virtual public base //if visibility mode was not public then base class pointer (from main func )is not able to access the inheriated attributes ......because the inheriated attributes would come under private or protected that depends on visibility mode and that are not able to access from outside the class
{
    public:
    int b=22;
    void show()  //re defined show() func
    {
        cout<<endl<<a<<"   "<<b<<endl;
    }
};
 
int main()
{

    dev o1;
    // o1.a=10;
    // o1.b=20;
    // o1.show();               //ambiguity
    // o1.base::show();         //ambiguity

    base o2;
//     base *bptr=&o2;
//     bptr->a=67;
//     bptr->show();

base *bptr=&o1;    //so now bptr can only access attributes that are publically inheriated only in dev class from base class
// bptr->b=90;    //not possible

bptr->a=33;
bptr->show();//now it invokes the show func of deriverd class
//if i comment out show func of derived class then bptr->show() will invoke the base class show func




                    //using dynamic memory allocation
    base *p=new dev;
    p->a=2;
    p->show();

return 0;
}
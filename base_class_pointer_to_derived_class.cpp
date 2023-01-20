#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

class base
{
    public:
    int a;
    void show()
    {
        cout<<a<<endl;
    }

};

class dev:virtual public base
{
    public:
    int b;
    void show()
    {
        cout<<endl<<a<<"   "<<b<<endl;
    }
};
 
int main()
{

    dev o1;
    o1.a=10;
    o1.b=20;
    // o1.show();               //ambiguity
    // o1.base::show();         //ambiguity

    base o2;
//     base *bptr=&o2;
//     bptr->a=67;
//     bptr->show();

base *bptr=&o1;    //so now bptr can only access attributes that are inheriated in dev class from base class
// bptr->b=90;    //not possible
bptr->a=33;
bptr->show();
return 0;
}
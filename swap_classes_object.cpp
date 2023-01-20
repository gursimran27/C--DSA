#include <iostream>
using namespace std;


//swap by making a func as a frind of both classes
class B;

class A
{
    int x;

public:
    A()
    {
        x = 10;
    }
   friend void swap(A&,B&);
   friend void display(A,B);
};


class B
{
    int y;

public:
    B()
    {
        y = 120;
    }
    friend void swap(A&,B&);
       friend void display(A,B);
};

 void swap(A &t1,B &t2)
 {
    int temp=t1.x;
    t1.x=t2.y;
    t2.y=temp;
 }


 void display(A t1,B t2)
 {
    cout<<t1.x<<" "<<t2.y<<endl;
 }






//or




//swap by making a member func as a friend 
class D;//forward decleration

class C
{
    int a;
    public:
    C()
    {
        a=100;
    }

    void show()
    {
        cout<<a<<" ";
    }

    void swap2(C &,D &);//member func decleration
};

class D
{
    int b;
    public:
    D()
    {
        b=2;
   } 

       void show()
    {
        cout<<b<<" ";
    }


    friend void C::swap2(C &,D &);
};


//member func defination




void C::swap2(C &t1,D &t2)
{
    int temp=t1.a;
    t1.a=t2.b;
    t2.b=temp;
}




//or 

//swap by making 2 classes as friend 
class F;//forward decleration

class E
{
    int a;
    public:
    E()
    {
        a=10;
    }

    void show()
    {
        cout<<a<<" ";
    }

    void swap3(E &,F &);//member func decleration
};

class F
{
    int b;
    public:
    F()
    {
        b=21;
   } 

       void show()
    {
        cout<<b<<" ";
    }


    friend class E;
};


//member func defination

void E::swap3(E &t1,F &t2)
{
    int temp=t1.a;
    t1.a=t2.b;
    t2.b=temp;
}





int main()
{

    //swap using a function common friend to both classes   
    //  A a;
    //  B b;
    //  display(a,b);
    //  swap(a,b);
    //  display(a,b);



    //swap using member func as a friend
    // C c;
    // D d;
    // c.show();
    // d.show();
    // c.swap2(c,d);
    // cout<<endl;
    // c.show();
    // d.show();



//swap using both classes as friend
   E e;
    F f;
    e.show();
    f.show();
    e.swap3(e,f);
    cout<<endl;
    e.show();
    f.show();

    return 0;
}
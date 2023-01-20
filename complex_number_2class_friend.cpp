#include<iostream>
using namespace std;


class B;

class A
{
    int real;
    int img;
    public:
    A()
    {

    }

    A(int a, int b)
    {
        real=a;
        img=b;
    }

    display()
    {
        cout<<real<<" +i "<<img<<endl;
    }

  
    //member fumction
    void sum(A,B);
   friend A sum2(A&,B&);
};


class B
{
    int real;
    int img;
    public:
    B()
    {

    }

    B(int a, int b)
    {
        real=a;
        img=b;
    }

    display()
    {
        cout<<real<<" +i "<<img<<endl;
    }

  friend void A::sum(A,B);
    friend A sum2(A&,B&);
};

void A::sum(A t1,B t2)
{
     
    real=t1.real+t2.real;
    img=t1.img+t2.img;


}



A sum2(A &t1,B &t2)
{
     A temp;
    temp.real=t1.real+t2.real;
    temp.img=t1.img+t2.img;
    return temp;
}

int main()
{
  A x1(2,2),x2,x3;
  cout<<"by making a member func as friened"<<endl;
  B y(8,1);
  

   x2.sum(x1,y);
   x2.display();
  
  cout<<"using func as a friend of both class"<<endl;
  x3=sum2(x1,y);
  x3.display();

  //or we can do by making two class as a friend like  ....  friend class A;
return 0;
}
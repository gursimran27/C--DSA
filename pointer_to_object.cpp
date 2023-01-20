#include<iostream>
using namespace std;
# define rep(i,a,b) for(int i=a;i<b;i++)
 

 class A
 {
    public:
    int a;
     A()
     {
        cout<<"welcome"<<endl;
     }


    A(int y)
    {
        a=y;
    }
    void set(int val)
    {
        a=val;
    }

    void get()
    {
        cout<<a<<endl;
    }
 };

int main()
{
    // A o;//here we have not called parameterized constructor
    //  A *ptr=&o;
    //  (*ptr).set(10);   //in (*ptr)  the brackets are must because the dot operator has high precedence than star operator
    //  ptr->get();  


    //or by dinamic memory allocation

     
  // A *p=new A; // in this decleration the default constructor is called



    A *ptr=new A(54); //here (54)....mean we have called parameteriseed constructor
    ptr->get();

    ptr->set(20);
    (*ptr).get();


return 0;
}
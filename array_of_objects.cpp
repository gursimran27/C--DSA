#include <iostream>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)

class A
{
public:
    int a;
    A()
    {
        cout << "welcome" << endl;
    }

    A(int y)
    {
        a = y;
    }
    void set(int val)
    {
        a = val;
    }

    void get()
    {
        cout << a << endl;
    }
};

int main()
{
    // simple method is

    // A o[2]; //here we came to know that the default constructor is called 2 times as like here we have created array of 2 objects
    // int i;
    // rep(i, 0, 2)
    // {
    //     int x;
    //     cin >> x;
    //     o[i].set(x);
    // }
    // int j;
    // rep(j, 0, 2)
    // {
    //     o[j].get();
    // }


                //or


    //dynamic memory allocation
   //note if class has parameterized constructor and we are creating array of objets then that class should also have default constructor
    A *ptr=new A[2];

    A *temp=ptr;
    int i;
    rep(i,0,2)
    {
        int x;
        cin>>x;
        (*temp).set(x);
        temp++;
    }

    temp=ptr; //because of prv loop the temp had gone out of our array scope

    int j;
    rep(j,0,2)
    {
        temp->get();
        temp++;
    }

    return 0;
}
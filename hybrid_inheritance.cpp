#include<iostream>
using namespace std;

class roll
{
    protected:
    int roll;
    public:
    void set_roll()
    {
        roll=29;
    }

    void get_roll()
    {
        cout<<roll<<endl;
    }
};

class test:public roll
{
    protected:
    int t1,t2;
    public:
    void set_test()
    {
        t1=10;
        t2=20;
    }
    void get_test()
    {
        cout<<t1<<" "<<t2<<endl;

    }
};

class sports
{
    protected:
    int sports;
    void set_sports()
    {
        sports=30;
    }
    void get_sports()
    {
        cout<<sports<<endl;
    }
};


class result:public test,public sports
{

  int result;
 public:
 void set_result()
 {
    set_roll();
    set_test();
    set_sports();
    result=t1+t2+sports;

 }


 void display()
 {
    cout<<"roll=";
    get_roll();        //or we can use cout<<"roll="<<roll;    because roll is protscted
    cout<<"test=";       
    get_test();
    cout<<"sports="<<sports<<endl;
    cout<<"result="<<result;
 }
};
int main()
{
    result o;
    o.display();
    cout<<endl;
    o.set_result();
    o.display();
return 0;
}
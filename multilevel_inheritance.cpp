#include<iostream>
using namespace std;

class roll
{
    protected:
    int roll;
    public:
    void set_roll()
    {
        cout<<"enter roll"<<endl;
        cin>>roll;
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
         cout<<"enter marks"<<endl;
         cin>>t1>>t2;
    }
    void get_marks()
    {
        cout<<t1<<" "<<t2<<endl;
    }
};

class result:public test
{
    int result;
    public:

    void display()
    {
        result=t1+t2;
        cout<<endl;
        get_roll();
        get_marks();
        cout<<result<<endl;
    }
};
int main()
{
    result o;
    o.set_roll();
    o.set_test();
    o.display();
return 0;
}
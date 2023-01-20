#include<iostream>
using namespace std;


class stu1; //forward decleration

class stu
{
    int roll;
    int id;
    public:
    void setdata(int a,int b);
     //or
    //   void setdata(int a)
    // {
    //     roll=a;
    // }

    void getdata(stu t)
    {
        cout<<endl<<t.roll;
    }


    void copy(stu t);
    void swap(stu t)
    {
        roll=t.id;
        id=t.roll;
    }
    void display()
    {
        cout<<roll<<" "<<id<<endl;
    }

};


void stu::copy(stu t)
{
    roll=t.roll;
}


void stu::setdata(int a,int b)
{
    roll=a;
    id=b;
}








int main()
{
    stu s,s1;
    s.setdata(10,11);
    s1.setdata(20,21);
//    s. getdata(s1);
//    s1.getdata(s);


//    s.getdata(s);
//    s.copy(s1);
//    s.getdata(s);


// s.display();
// s.swap(s);
// s.display();

// s.display();
// s.swap(s1);
// s.display();
return 0;
}
#include<iostream>
using namespace std;

class stu
{
  string name;
  public:
  int marks;
    
    //constructor
   stu()
   {
    cout<<"efault constructor"<<endl;
   }
    
    stu(int val)
    {
        marks=val;
    }
    
    void setname(string s)
    {
        name=s;
    }

    void print()
    {
        cout<<"name is="<<name<<endl;
        cout<<"marks is="<<marks<<endl;
    }

//operator overloading
bool operator ==(stu &a)
{
    if(marks==a.marks)
    { return true;
    }
    else{
        return false;
    }
}
};

int main(){
  stu a(100);
  stu b(10);
   stu c;
  if(b==a)
  {
    cout<<"same";
  }
  else{
    cout<<"not";
  }
//a.marks=10;
//   string s="gursimran";
//   a.setname(s);
  //sa.print();
return 0;
}
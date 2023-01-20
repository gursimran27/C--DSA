#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

class A
{
    string name;
    int age;
    public:
    A()
    {

    }


    A(string s,int x): 
    name(s),age(x)
    {
    }

    A compare(A t)
    {
        if(age>t.age)
            return (*this);

            return t;
    }

    void display()
    {
        cout<<name<<endl<<age<<endl;
    }
};
 
int main()
{
    A o1("guri",19),o2("hell",39),o3("gora",16);
        A temp_obj;
    temp_obj=o1.compare(o3);
    temp_obj.display();
   
return 0;
}
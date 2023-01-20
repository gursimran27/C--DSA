#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
//overloading insertion << and extraction >> operators
class A
{
    int a;
    public:
    friend ostream& operator <<(ostream &out,A&); //ostream& mean return by referance
    friend istream& operator >>(istream &in,A&);
};
   
   
    ostream& operator <<(ostream &out,A& t)
    {
        out<<t.a<<endl;
    }

    istream& operator >>(istream &in,A& t)
    {
        cout<<"enter a value"<<endl;
        in>>t.a;
    }

int main()
{
    A obj;
    //binary operator overloading using friend func
    cout<<obj;  //both are passed as arguments
    cin>>obj;   //both are passed as arguments
    cout<<obj;
return 0;
}
#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

class staff
{
    protected:
    int code;
    string name;

    staff(string x,int y):code(y),name(x){}
};

class teacher:protected staff
{
    
     string subject;
     string publication;
     public:

     teacher(string x,string y,string str,int a):
     subject(x),publication(y),staff(str,a)
     {
     }

     void dispaly_details()
     {
        cout<<"About teacher:"<<endl;
        cout<<"name = "<<name<<endl<<"code = "<<code<<endl<<"subject = "<<subject<<endl<<"publication = "<<publication<<endl<<endl;
     }
};


class officer:protected staff
{
    char grade;
    public:
    officer(char ch,string str,int a):
    grade(ch),staff(str,a){}

     void dispaly_details()
     {
        cout<<"About officer:"<<endl;
        cout<<"name = "<<name<<endl<<"code = "<<code<<endl<<"grade = "<<grade<<endl<<endl;
     }

};


class typist:protected staff
{
    protected:
    int speed;
    public:
    typist(int b,string str,int a):
    speed(b),staff(str,a){}
};


class regular:private typist
{
    float daily_wages;
    public:
    regular(float f,int b,string str,int a):
    daily_wages(f),typist(b,str,a){}

     void dispaly_details()
     {
        cout<<"About regular typist:"<<endl;
        cout<<"name = "<<name<<endl<<"code = "<<code<<endl<<"speed = "<<speed<<"wpm"<<endl<<"daily wages = "<<daily_wages<<endl<<endl;
     }
    
};

class casual:private typist
{
    float daily_wages;
    public:
    casual(float f,int b,string str,int a):
    daily_wages(f),typist(b,str,a){}

     void dispaly_details()
     {
        cout<<"About casual typist:"<<endl;
        cout<<"name = "<<name<<endl<<"code = "<<code<<endl<<"speed = "<<speed<<"wpm"<<endl<<"daily wages = "<<daily_wages<<endl<<endl;
     }
    
};

 
int main()
{
       teacher t("DSA","sharma publications","candis",414);
       t.dispaly_details();

       officer o('B',"Riya",182);
       o.dispaly_details();

       regular r(1500.50,82,"roy",129);
       r.dispaly_details();

       casual c(1000.100,72,"vro",676);
       c.dispaly_details();
return 0;
}
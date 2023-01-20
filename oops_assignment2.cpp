#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)


class person
{
    int accout_no;
    // int ifsc_code;

    protected:
    float percentage_of_marks;

    public:
    string name;
    int age;
        //constructor
    person(int x,float a,string s,int b):
    accout_no(x),percentage_of_marks(a),name(s),age(b) { }
    
     int getpvt()
     {
        return accout_no;
     }
};

class sports
{
    protected:
    int medals;
    int sports_marks; //out of 100
    public:
    sports(int x)
    {
        medals=x;
    }


    void sp_m()
    {
        if(medals>=10)
           sports_marks=100;
        else if(medals>=5 && medals<10)
            sports_marks=75;
        else if(medals>=3 && medals<5)
            sports_marks=50;
        else if(medals>=1 && medals<3)
            sports_marks=33;
        else{
            sports_marks=0;
        }
    }

    
};

class Rank:protected person, protected sports
{
    float total_marks;  //out of 200
    float accademics_marks; //out of 100
     public:
    Rank(int x,float a,string s,int b ,int z):
     person(x,a,s,b),sports(z)
     {
             sp_m(); //func call
            accademics_marks=(percentage_of_marks/100)*100;  
            total_marks=accademics_marks+sports_marks;
     }

     char rank_generator()
     {
        if(total_marks>=190)
            return 'A';
        if(total_marks>=155 and total_marks<190)
            return 'B';
        if(total_marks>=100 and total_marks<155)
            return 'C';
        if(total_marks>=66 and total_marks<100)
            return 'D';
        else{
            return 'F';
        }
     }

     void person_details()
     {
        cout<<"name= "<<name<<endl<<"age= "<<age<<"\naccount number"<<getpvt()<<"\naccademics marks= "<<accademics_marks<<"\nmedals earned= "<<medals<<"\nsports marks= "<<sports_marks<<endl;
        cout<<"grand total according to equal weightage of accademics and sports is "<<total_marks<<endl;
     }  

    
};
 
int main()
{
    int x,b,z;
    string s;
    float a;

    cout<<"enter name of person\n";
    getline(cin,s);
    cout<<"enter account number"<<endl;
    cin>>x;
    cout<<"enter age"<<endl;
    cin>>b;
    cout<<"enter percentage of marks"<<endl;
    cin>>a;
    cout<<"enter number of medals earned"<<endl;
    cin>>z;

    Rank obj(x,a,s,b,z);
     cout<<"-------------------------------------------------------------------\n";
    obj.person_details();
    cout<<"\nrank generated is= "<<obj.rank_generator();
   
return 0;
}
#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

class shop
{
    protected:
    string name;
    float price;
    public:
    shop(string s,float x):name(s),price(x){}

    virtual void show()=0;//pure virtual func
};


class book:public shop
{
    int page;
    public:
    book(string s,float x,int y):shop(s,x),page(y){}

    void show()
    {
        cout<<endl<<"book title= "<<name<<" "<<"price= "<<price<<" "<<"pages= "<<page<<endl; 
    }

};


class CD:public shop
{
    float time;
    public:
    CD(string s,float x,float y):shop(s,x),time(y){}

    void show()
    {
         cout<<endl<<"book title= "<<name<<" "<<"price= "<<price<<" "<<"time = "<<time<<endl;
    }
};
 
int main()
{

    shop *base_ptr[2];//2 base class pointers
    book o1("oops",99.57,520);
    CD o2("DSA",755.50,5.11);

    base_ptr[0]=&o1;
    base_ptr[1]=&o2;

    base_ptr[0]->show();
    base_ptr[1]->show();
    
    

return 0;
}
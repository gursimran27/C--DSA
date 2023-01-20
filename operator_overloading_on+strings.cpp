#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

class A
{
    string str;
    public:
    A(string str)
    {
        this->str=str;
    }

    friend string operator +(A,A);
    friend bool operator >=(A,A);
};
 
    string operator +(A t1,A t2)
    {
        
        return (t1.str).append(t2.str);
    }

    bool operator >=(A t1,A t2)
    {
        return ((t1.str).size()  >= (t2.str).size());
        
    }


int main()
{
   A o1("guri");
   A o2("gangs");
   
   string s=o1+o2;
   cout<<s<<endl;

   bool ans=o1>=o2;
   cout<<ans;

return 0;
}
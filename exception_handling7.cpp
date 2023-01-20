#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 
                    //class type as excepton
 class A
 {
    int a;
    string str;

    public:
    A(int x, string s):
    a(x),str(s)  {}
    
    void show()
    {
        cout<<a<<endl<<str<<endl;
    }

 };
int main()
{
 
        try
        {
            throw A(10,"guri");
        }
        catch(A obj)
        {
            obj.show();
        }
        
return 0;
}
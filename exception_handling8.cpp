#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

                //rethrow
 


 void test()
 {
    try
    {
        throw 10;
    }
    catch(int a)
    {
        throw;
    }
    
 }
int main()
{
    try
    {
        test();
    }
    catch(int a)
    {
        cout<<"main func";
    }
    
     
return 0;
}
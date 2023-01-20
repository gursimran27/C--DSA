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
        throw char(a); //type cast
    }
    
 }
int main()
{
    try
    {
        test();
    }
    catch(char a)   //if i had use int a....it cause abnormal termination
    {
        cout<<"main func"<<a;
    }
    
     
return 0;
}
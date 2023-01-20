#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

         
                            //catch all

void test(int x)
{

try
{
    if(x==1)
        throw x;

    if(x==0)
        throw 'x';

    if(x==-1)
        throw 1.0;

}
 catch(...)
 {
    cout<<"catch all"<<endl;
 }
    

}
                        
 
int main()
{  


        test(1);
        test(0);
        test(-1);

return 0;
}
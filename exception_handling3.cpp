#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

         
                            //multiple catches

void test(int x)
{

try
{
    if(x==1)
        throw x;  //int

    if(x==0)
        throw 'x';   //char

    if(x==-1)
        throw 1.0;  //float or double

}
    catch(int a)
    {
        cout<<"integer exception "<<a<<endl;
    }

    catch(char ch)
    {
        cout<<"character exception "<<ch<<endl;
    }
    catch(double a)
    {
        cout<<"float exception "<<a<<endl;
    }

}
                        
 
int main()
{  


        test(1);
        test(0);
        test(-1);

return 0;
}
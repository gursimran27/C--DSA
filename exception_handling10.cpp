#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

         
                            //specific throw

void test(int x) throw(int)  //only int throw is allowed
{
                
    if(x==1)
        throw x;

    if(x==0)
        throw 'x';

    if(x==-1)
        throw 1.0;

}
                        
 
int main()
{  

   try
   {
        // test(1);
        test(0);
        // test(-1);
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

   cout<<"bye";
return 0;
}
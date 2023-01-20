#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

         
                            //multiple catches

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

    catch(char ch)
    {
        cout<<"character exception "<<ch<<endl;
    }

    catch(...)              //catch all must be last handler mean it should be after all catch 
    {
        cout<<"catch all\n";
    }
    

}
                        
 
int main()
{  


        test(1);
        test(0);
        test(-1);

return 0;
}
#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

                        //invoking a func that generates exception
 


void test(int num,int denum)
{
    if(denum==0)
            throw (denum);

    else{
        cout<<"test1 ans is = "<<num/denum<<endl;
    }
}



void test2(int num,int denum)
{
    try
    {
        if(denum==0)
                throw denum;

        else{
        cout<<"test2 ans is = "<<num/denum<<endl;
        }
    }
    catch(int a)
    {
        cout<<"try in func not able to divide with = "<<a<<endl;
    }
    
}

int main()
{
         try
            {
                test(55,5);
                test(55,0);
            }

            catch(int a)
            {
                cout<<"try in main func not able to divide with = "<<a<<endl;
            }


                        //or
                        //make try/catch in test2
         test2(50,5);
         test2(2,0);

     
return 0;
}
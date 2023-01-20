#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 
int main()
{
         int num,denum,res;
         cin>>num>>denum;

        try
        {
            if(denum==0)
                throw denum;

            else{
                res=num/denum;
                cout<<res<<endl;
            }

            cout<<"hello\n";
        } 

        catch(int a)
        {
            cout<<"not able to divide by= "<<a<<endl;
        }

         
return 0;
}
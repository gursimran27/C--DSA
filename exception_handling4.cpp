#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 
int main()
{
       try
       {
           throw 10;
           
       }
       catch(int a)
       {
         cout<<"first handler\n";         
       }

       catch(int a)
       {
        cout<<"second handler \n";
       }
       
return 0;
}   
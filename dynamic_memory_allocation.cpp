#include<iostream>
using namespace std;
# define rep(i,a,b) for(int i=a;i<b;i++)
 
int main()
{
    // int *ptr=new int(10);

    // cout<<(*ptr)<<endl;

 int size;
 cin>>size;
    int *ptr=new int[size];
   int i;

   ptr[0]=10;
   ptr[2]=22;
   ptr[1]=8;
    //rep(i,0,size){
    //cout<<ptr[i]<<" ";
   // }

   
    //or
    rep(i,0,size){
    cout<<*ptr<<" ";
    ptr++;
    }
return 0;
}   
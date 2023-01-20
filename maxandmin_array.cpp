#include<iostream>
#include<climits>
using namespace std;
int main()
{
 int n;
   cout<<"enter array size"<<endl;
   cin>>n;
   int arr[n];
   cout<<"enter array elemenys"<<endl;
   for(int i=0;i<n;i++)
   {
   cin>>arr[i];
   }

   int minimum=INT_MAX;
   int maximum=INT_MIN;

   for(int i=0;i<n;i++)
   {
    if(minimum>arr[i])
    {
        minimum=arr[i];
    }
    if(maximum<arr[i])
    {
        maximum=arr[i];
    }
   }


   cout<<"maximum is="<<maximum<<endl<<"minimum is="<<minimum;

return 0;
}
#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int key)
{
    int low=0;
    int high=n-1;

    while(low<=high)
    {
        int midval=(low+high)/2;
        if(key==arr[midval])
        {
            return midval;
        }
        else if(key>arr[midval])
        {
            low=midval+1;
        }
        else if(key<arr[midval])
        {
             high=midval-1;
        }   

    }

    return -1;
        
}
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

   int key;
   cout<<"what do u wnat to search"<<endl;
   cin>>key;

   int ans=binarysearch(arr,n,key);
   if(ans==-1)
   {
   cout<<"element not found";
   }
   else
   {
   cout<<"element found at position :"<<ans+1;
   }
return 0;
}
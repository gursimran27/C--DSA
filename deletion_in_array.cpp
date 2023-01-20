#include<iostream>
using namespace std;

deleteatany(int arr[],int n)
{
    int pos;
    cout<<"where u wnat to delete"<<endl;
    cin>>pos;
    for(int i=pos-1;i<n;i++) //pos-1 is index
    {
        arr[i]=arr[i+1];
    }
     arr[n-1]=NULL;
    for(int i=0;i<n;i++) //n-1 as we have delete one element
    {
        cout<<arr[i]<<" ";
    }
}

deleteatfront(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i+1];

    } 
    arr[n-1]=NULL;
    for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        
    
}
int main()
{

   int n;
    cout<<"enetr array size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

   // deleteatfront(arr,n);
   deleteatany(arr,n);
return 0;
}
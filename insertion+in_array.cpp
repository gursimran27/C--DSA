#include<iostream>
using namespace std;

insertatany(int arr[],int n,int key)
{
    int pos;
    cout<<"where u wnat to insert"<<endl;
    cin>>pos;
    for(int i=n-1;i>=pos-1;i--)//pos-1 is index
    {
        arr[i+1]=arr[i];
    } 

    arr[pos-1]=key; //pos-1 is index
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void insertatfront(int arr[],int n,int key)
{
    for(int i=n-1;i>=0;i--)
    {
      arr[i+1]=arr[i];
    }
    arr[0]=key;

    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
int insertatend(int arr[],int n,int key)
{
    //int arr[n+1];
    arr[n]=key;

    for(int i=0;i<=n;i++)
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
    
    int k;
    cout<<"what u want to insert"<<endl;
    cin>>k;
    

//     insertatend(arr,n,k);
//     cout<<endl;
//     insertatfont(arr,n,k);
//     cout<<endl;
    insertatany(arr,n,k);
return 0;
}
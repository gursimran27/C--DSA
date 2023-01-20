#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
//arrays are always passed by referance in a func
//we can also declare array globally ...so no need to pass in func
const int N=1e5;
void merge(int arr[],int l,int mid,int r)
{
    int i=l;
    int j=mid+1;
    int k=l; //will store sorted array  
    int temp[N];

    while(i<=mid and j<=r)
    {
        if(arr[i]<=arr[j])
        {
            temp[k]=arr[i];
            i++;
        }
        else{
            temp[k]=arr[j];
            j++;
        }
        k++;
    }

    //might some elements were left in arrays

    if(i>mid) // 1st array exausted
    {
        while(j<=r){
            temp[k]=arr[j];
            j++;k++;
        }
    }
    else{  //2nd array exausted
        while(i<=mid)
        {
            temp[k]=arr[i];
            i++;k++;
        }

    }   

    //change to orignal array
    for(int i=l;i<=r;i++)
    {
        arr[i]=temp[i];
    }
}
 
void mergesort(int arr[],int l,int r)
{
    if(l==r)
        return;
    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}



int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i;
    rep(i,0,n)
        cin>>arr[i];

    mergesort(arr,0,n-1);

    rep(i,0,n)
        cout<<arr[i]<<" ";
return 0;
}
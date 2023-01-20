#include <bits/stdc++.h>
using namespace std;

// void swap(int arr[],int i,int j)
// {
//     int temp=arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp;
// }

int partiation(int arr[],int l,int r)
{
    int pivot=arr[r];
    int i=l-1;
    
    for(int j=l;j<r;j++)
    {
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
        swap(arr[i+1],arr[r]);
    }
    return i+1;
}

void quicksort(int arr[],int l,int r)
{
    if(l==r) return;
    if(l<r)
    {
        int pi=partiation(arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
    }
}

int main() {
    int arr[]={-1,0,-2,10,2};
    
    quicksort(arr,0,4);
    
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
    return 0;
}
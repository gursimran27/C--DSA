#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 
void merge(int arr[],int l, int mid,int r)
{
    int l_sz=mid-l+1;
    int r_sz=r-mid;

    int temp1[l_sz];
    int temp2[r_sz];    
    //note
    // we would merge these array in our main array
    
    for(int i=0;i<l_sz;i++)
    {
        temp1[i]=arr[l+i];
    }

    for(int i=0;i<r_sz;i++)
    {
        temp2[i]=arr[mid+1+i];
    }

    int i=0;//traversing temp1 array
    int j=0;//traversing temp2 array
    int k=l;//for main array

    while(i<l_sz and j<r_sz)
    {
        if(temp1[i]<=temp2[j])
        {
            arr[k]=temp1[i];
            i++;
        }
        else{
            arr[k]=temp2[j];
            j++;
        }
        k++;
    }

    //there might some items left in temp1 or temp2 array ..so

    if(i>l_sz)
    {
        while(j<r_sz)
        {
            arr[k]=temp2[j];
            j++;
            k++;
        }
    }
    else{    
        while(i<l_sz)
        {
            arr[k]=temp1[i];
            i++;k++;
        }

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
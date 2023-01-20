#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 
void merge(int arr[],int l, int mid,int r)
{
    int l_sz=mid-l+1;
    int r_sz=r-mid;

    int temp1[l_sz+1]; //+1 beacuse i want to store int_max at end
    int temp2[r_sz+1]; //+1 beacuse i want to store int_max at end
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
    
    temp1[l_sz]=INT_MAX;
    temp2[r_sz]=INT_MAX;
    int i=0;//traversing temp1 array
    int j=0;//traversing temp2 array
    

    for(int k=l;k<=r;k++)
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
    }
    // no need for rest code beacuse if INT_Max

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
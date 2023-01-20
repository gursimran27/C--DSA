#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

//brute force approch
//o(n^3)


int traping_rainwater(int arr[],int n)
{
    int ans=0;
    for(int i=1;i<n-1;i++)   //termination first and last index because there is no support for water collection
    {
        int leftmax=arr[i];
        for(int j=i;j>=0;j--)
        {
            leftmax=max(leftmax,arr[j]);
        }

        int rightmax=arr[i];
        for(int k=i+1;k<n;k++)
        {
            rightmax=max(rightmax,arr[k]);
        }

        ans+=max(min(leftmax,rightmax)-arr[i],0);

    }
    return ans;
}
 
int main()
{
     int arr[]={0,1,0,2,1,0,1,3,2,1,2,1};
     int size=sizeof(arr)/sizeof(arr[0]);
    
    cout<<traping_rainwater(arr,size);
return 0;
}
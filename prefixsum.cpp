#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 
int main()
{
   int n;
   cin>>n;
   int arr[n];

   int i;
   rep(i,0,n)
     cin>>arr[i];

    rep(i,1,n)
      arr[i]+=arr[i-1];

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
return 0;
}
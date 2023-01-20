#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 
int main()
{
      int arr[6]={1,2,1,4,2,9};
      int n=1e5;
      int freq[n]={0};
    int i;
     rep(i,0,6)
     {
            freq[arr[i]]++;
     }

     for(int i=0;i<10;i++)
     {
        cout<<i<<" "<<freq[i]<<endl;
     }



return 0;
}
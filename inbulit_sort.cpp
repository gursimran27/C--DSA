#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 
int main()
{

                   // a[4]= 1 , 2 , 32 , 32
    //pointer or address=   a ,a+1, a+2,a+3, a+4
      //in general   a,a+1,a+2.......a+n
       //for array's
       int n,i;
       cin>>n;                             
    //    int arr[n];
    //    rep(i,0,n){
    //        cin>>arr[i];
    //    }

    //    sort(arr,arr+n); //(starting address , next address of the element upto where we want sorting)
    //    i=0;
    //    rep(i,0,n)
    //    {
    //     cout<<arr[i]<<" ";
    //    }

       //cout<<endl;
    //    sort(arr,arr+n,greater<int>()); //(starting address , next address of the element upto where we want sorting)
    //    rep(i,0,n)
    //    {
    //     cout<<arr[i]<<" ";
    //    }


                    //range based sort
    //                     cout<<endl;
    //    sort(arr+1,arr+4);
    //    rep(i,0,n)
    //    {
    //     cout<<arr[i]<<" ";
    //    }



       cout<<endl;
                    //for vectors
     vector<int>v;
     rep(i,0,n)
     {
        int x;
        cin>>x;
        v.push_back(x);
     }


   //  sort(v.begin(),v.end());
   // sort(v.begin(),v.end(),greater<int>());
   sort(v.begin()+1,v.end());
         
     for(auto x:v)
     {
        cout<<x<<" ";
     }

return 0;
}
#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    int i,j;
    rep(i,0,n)
    {
       int x;
       cin>>x;                  //cin>>v[i] this donot work
       v.push_back(x);         
    }
    cout<<v.size()<<endl;
    rep(j,0,v.size())
    {
        cout<<v[j]<<" ";
    }
    cout<<endl;
    vector<int>v1=v;
    cout<<v1.size();

    vector<int>v2(n,2);
     cout<<endl<<v2.size()<<endl;
     int k;
     rep(k,0,v.size()) //or here instead of v.size() we can write k<n....because we have already initilised the v2 with size of n
     {
        cout<<v2[k]<<" ";
     }

cout<<endl;
   //   vector<int>::iterator it;
   //   for(it=v.begin();it!=v.end();it++)
   //   {
   //    cout<<(*it)<<" ";
   //   }
               //or

   //    for(auto it=v.begin();it!=v.end();it++)
   //   {
   //    cout<<(*it)<<" ";
   //   }

            //or
            v.pop_back();
      for(auto &x:v) //here we have use referance inorder to prevent copy 
      {
         cout<<x<<" ";
      }
return 0;
}
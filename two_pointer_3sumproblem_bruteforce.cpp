#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 
int main()
{
     vector<int>v={12,3,7,1,6,9};
     int target;
     cin>>target;
bool ans=false;
     int i,j,k;
     rep(i,0,v.size())
     { 
        rep(j,i+1,v.size())
        {
            rep(k,j+1,v.size())
            {
                if(v[i]+v[j]+v[k]==target)
                ans=true;
               
            }
        }
     }

     cout<<ans;
return 0;
}
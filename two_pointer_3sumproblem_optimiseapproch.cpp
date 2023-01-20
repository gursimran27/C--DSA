#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 
int main()
{
      int n;
      cin>>n;

      vector<int>v;

      int i;
      bool ans=false;
      rep(i,0,n)
      {
           int x;
           cin>>x;
           v.push_back(x);
      }

      int target;
      cin>>target;


      sort(v.begin(),v.end());

      for(int i=0;i<n;i++)
        {
            int low=i+1;
            int high=n-1;
            while(low<high)
            {
                int curr=v[i]+v[low]+v[high];           //v[i] is fix
                if(curr==target)
                {
                    ans=true;
                    break;
                }

                else if(curr<target)
                    low++;
                else{
                    high--;
                }     
            }

        }

        cout<<ans<<endl;
              
    
return 0;
}
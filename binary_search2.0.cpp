#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

int binary_search(vector<int>v,int x)
{
    int low=0;
    int high=(v.size()-1);
    int mid;

    while(high-low>1)  //by (high-kow>1)...after completing while loop we are only left with two elements
    {
        mid=(low+high)/2;
        if(x<v[mid])
           low=mid+1;
           else             //x<=v[mid]
             high=mid;
    }
    if(x==v[low])
        return low;
        else if(x==v[high]) 
           return high;

     return -1;
}


int main()
{
      int n;
      cin>>n;
    vector<int>v;   //donot do vector<int>v(n);
    int i;
    rep(i,0,n)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
   sort(v.begin(),v.end());
    for(auto x:v)
    { 
        cout<<x<<" ";
    }
    cout<<endl;
   int x; cin>>x;

        int idx=binary_search(v,x);
      (idx!=-1)? cout<<v[idx]<<" elemet found at index= "<<idx: cout<<"not fouund";


return 0;
}  
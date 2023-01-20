#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 


int main()
{
  int n;
  cin>>n;
  vector<int>v;
  int i;
  rep(i,0,n)
  {
    int x;
    cin>>x;
    v.push_back(x);
  }

  int low=0;
  int high=v.size()-1;

  while(low<high)   //O(n)
  {
    if(v[low]==0) low++;

    if(v[high]==1)  high--;
    
    else if(v[low]==1 and v[high]==0)
        swap(v[low],v[high]);
  }

  for(auto &x:v)
  {
    cout<<x<<" ";
  }
return 0;
}
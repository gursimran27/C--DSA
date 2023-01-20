#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 

 //O(q)


int main()
{

  int n;
  cin>>n;
  vector<int>v;

  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    v.push_back(x);
  }

  int q;
  cin>>q;

//prefix sum
for(int i=1;i<v.size();i++)
    v[i]+=v[i-1];

  while(q--)
  {
    int l,r;
    cin>>l>>r;
      cout<<v[r]-v[l-1];
  }
return 0;
}
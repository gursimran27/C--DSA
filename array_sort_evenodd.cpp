#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

//make even number first in array then odd numbers
 
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
   while(low<high)    //O(n)
   {
    if(v[low]%2==0) low++;

    if(v[high]%2!=0) high--;

    else if(v[low]%2!=0 and v[high]%2==0)
        swap(v[low],v[high]);
   }

   vector<int>::iterator it;
   for(it=v.begin();it!=v.end();it++)
   {
    cout<<(*it)<<" ";
   }


return 0;
}
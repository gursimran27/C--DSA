#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 
int main()
{ 
    //lower bond and upper bond return iterators in case of contaiers and return pointers in case of array's
    //if that value is present then lower bound will points towards that value and that value is not present then lower bond will point towards just grester element to corresponds to that value
    //in case of upper bond either if value is there or not if always points to its just next greater value
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

    sort(v.begin(),v.end());
    for(auto &x:v)
        cout<<x<<" ";

    cout<<endl;

    auto it=lower_bound(v.begin(),v.end(),11);
    if(it!=v.end())
        cout<<(*it)<<endl;
    else    
        cout<<"wrong value input"<<endl;
                //or we can write like this

    int a=(*upper_bound(v.begin(),v.end(),7)) ;
    cout<<a;


return 0;
}
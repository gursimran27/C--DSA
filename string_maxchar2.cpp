#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

int main()
{
string str;
cin>>str;

map<char,int>m;

for(int i=0;i<str.size();i++)
{
    m[str[i]]++;
}


// map<int,char>temp;

// for(auto& x:m)
// {
//     temp[x.second]=x.first;
// }
// for(auto& x:temp)
// {
//    cout<<x.first<<" "<<x.second<<endl; //if key is same the its value is updated
// }

char ans;
int maxi=INT_MIN;
for(auto&x:m)
{
    if(maxi<x.second)
    {
        maxi=x.second;
        ans=x.first;
    }
}

cout<<ans<<" "<<maxi;
return 0;
}
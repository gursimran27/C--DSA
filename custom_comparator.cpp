#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
//when comparator will return false then internal swaping would execute
bool comparator1(int a, int b) //arguments are those of data type of container
{
    return(a>b);
}


bool comparator2(int a, int b) 
{
    return(a<b);
}

bool comparator3(pair<int,int>a,pair<int,int>b)
{
    if(a.second==b.second)
    {
        return(a.first>b.first);
    }
    return(a.second>b.second); //decending acc to second
}

bool comparator4(pair<int,int>a,pair<int,int>b)
{
    if(a.first==b.first)
    {
        return (a.second<b.second);
    }
    return(a.first>b.first);
}



 
int main()
{
//       vector<int>v;
//       v.push_back(20);
//       v.push_back(2);
//       v.push_back(240);
//       v.push_back(34);
//       v.push_back(1);
//       v.push_back(10);
//       int i;
//     rep(i,0,v.size())
//     cout<<v[i]<<" ";

//     cout<<endl;
// sort(v.begin(),v.end(),comparator1);
//  for(auto &x:v)
//        cout<<x<<" ";

//        cout<<endl;
// sort(v.begin(),v.end(),comparator2);
//  for(auto &x:v)
//        cout<<x<<" ";



                    //for vectors of pairs
    vector<pair<int,int>>v1;
    v1.push_back({3,4});
    v1.push_back({2,3});
    v1.push_back({23,3});
    v1.push_back({2,8});
    v1.push_back({8,3});
    v1.push_back({2,1});


for(auto x:v1)
cout<<x.first<<" "<<x.second<<endl;

    sort(v1.begin(),v1.end(),comparator3);
    cout<<endl<<endl;

for(auto x:v1)
cout<<x.first<<" "<<x.second<<endl;


    sort(v1.begin(),v1.end(),comparator4);
    cout<<endl<<endl;

for(auto x:v1)
cout<<x.first<<" "<<x.second<<endl;




return 0;
}
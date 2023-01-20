#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 
int main()
{
        pair<int,string>p;
      //  p={23,"guri"};
        //or
        p=make_pair(1,"hell");

        cout<<p.first<<" "<<p.second<<endl;

        //pair of arrays
        pair<int,string>p1[3];
        int i;
        rep(i,0,3)
        {
            int x;
            cin>>x;
            string s;
            cin>>s;
            p1[i]={x,s};
        }

        int j;
        rep(j,0,3)
        {
            cout<<p1[j].first<<" "<<p1[j].second<<endl;
        }


       swap(p1[0],p1[2]);
       cout<<endl<<endl;
        rep(j,0,3)
        {
            cout<<p1[j].first<<" "<<p1[j].second<<endl;
        }
return 0;
}
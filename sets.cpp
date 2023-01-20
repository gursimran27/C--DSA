#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 
int main()
{               //normal sets

     set<int>s;     //if we use string then it will store in lexiographic order
     
     int n,i;
     cin>>n;
    //  rep(i,0,n)
    //  {
    //     int x;
    //     cin>>x;
    //     s.insert(x);
    //  }

    //  for(auto &x:s)
    //  {
    //     cout<<x<<" ";
    //  }


            //unordered set
    // unordered_set<int>s1;
    //  rep(i,0,n)
    //  {
    //     int x;
    //     cin>>x;
    //     s1.insert(x);
    //  }

    //  for(auto &x:s1)
    //  {
    //     cout<<x<<" ";
    //  }


            //multiset
    multiset<int>s2;
            s2.insert(22);
            s2.insert(21);
            s2.insert(1);
            s2.insert(2);
            s2.insert(2);
            s2.insert(21);

     for(auto &x:s2)
     {
        cout<<x<<" ";
     }
                cout<<endl;
     //incase of multiset in erase func if we pass key as an argument then all that keys are deleted from set
    //but if we pass iterator as an argument then only one key thet iterator points is deleted

          //find() sunc
    auto it=s2.find(21);
    if(it!=s2.end())
    {
        cout<<(*it)<<" founded"<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }

                //erase() func

    // s2.erase(21); //all 21 are erased
    //   for(auto &x:s2)
    //  {
    //     cout<<x<<" ";
    //  }

           s2.erase(it); //it points towards 21...only one 21 is deleted
             for(auto &x:s2)
     {
        cout<<x<<" ";
     }
return 0;
}
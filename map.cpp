#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 
int main()
{
        //maps stores unique key value pairs and it stores in sorted form acc to key....no duplication are allowed
     map<int,string>m;
    m[2]="guri";
            //or
    m.insert(make_pair(4,"byee"));
            //or
    m.insert({1,"hell"});

     m[4]="good";       //so it update the value at key=4
    // for(auto &x:m)
    // {
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
                    //or
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }



                //find()....this func return an iterator if the key exist else it return end()

 // auto it=  m.find(2);
            //or
  map<int,string>::iterator it;
  it=m.find(3);
    if(it!=m.end())
    {
        cout<<"exist"<<" value is= "<<(*it).second<<endl;
    }
    else{
        cout<<"not exist"<<endl;
    }



                     //erase() ....func can take key as an argument or iterator as an arugemt
        cout<<endl;
    m.erase(2); //key as an argument
    for(auto &x:m)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
cout<<endl;
    auto it1=m.find(1); ///iterator it1 will points toward the key value {4,"good"}
    m.erase(it1);
    for(auto &x:m)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }





                //unordered maps
                //output in random order and duplicate not allowed
                cout<<endl<<"unorderd map"<<endl;
    unordered_map<int,string>m1;
    m1[2]="java";
    m1[7]="cpp";
    m1[0]="c#";
    m1[1]="python";

    for(auto &x:m1)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    


//                 //multimap
//                 //it can stores the duplicates also but sorted acc to key
//                 cout<<endl<<"multimap"<<endl;
//         multimap<int,string>m2;
//     m2[2]="java";
//     m2[7]="cpp";
//     m2[0]="c#";
//     m2[1]="python";
//     //m2[7]="gurii";

//     for(auto &x:m2)
//     {
//         cout<<x.first<<" "<<x.second<<endl;
//     }
    return 0;
}
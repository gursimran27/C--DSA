#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

void print_vector(vector<int>&v)
{
            for(int i=0;i<v.size();i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
}
 




int main()
{                       //vectors of pairs
        int n;
        cin>>n;
    // vector<pair<int,int>>v;
    // int i;
    // rep(i,0,n)
    // {
    //     int x,y;
    //     cin>>x>>y;
    //     v.push_back({x,y}); //or v.push_back(make_pair(x,y));
      
    // }

    //  i=0;
    // rep(i,0,v.size())
    // {
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    // }
    //     cout<<v[1].second;





                    //array of vectors

    //vector<int>v1[n];             //number of rows are fixed 

//   for(int i=0;i<n;i++)
//     {
//         int size;
//         cin>>size;
//        for(int j=0;j<size;j++)
//        {
//         int x;
//         cin>>x;
//         v1[i].push_back(x);
//        }
//     }

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<v1[i].size();j++)
    //     {
    //         cout<<v1[i][j]<<"  ";
    //     }
    //     cout<<endl;
    // }
                //or 

                // for(int i=0;i<n;i++)
                // {
                //     print_vector(v1[i]);
                // }




                //vector of vectors
                                        
            vector<vector<int>>v2;
                                            //here we cannot do v[i] in input
            for(int i=0;i<n;i++)
            {
                int size;
                cin>>size;
                vector<int>temp;
                for(int j=0;j<size;j++)
                {
                    int x;
                    cin>>x;
                    temp.push_back(x);
                }
                v2.push_back(temp);
            }


    //  for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<v2[i].size();j++)
    //     {
    //         cout<<v2[i][j]<<"  ";
    //     }
    //     cout<<endl;
   // }

                //or

                for(int i=0;i<n;i++)
                {
                    print_vector(v2[i]);
                }

return 0;
}
#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

//stack approch
//O(n^2)
int traping_rainwater(vector<int>v)
{
    int n=v.size();

    stack<int>st;  //used to store index
    int ans=0;
    int i;
    rep(i,0,n)
    {
            while(!st.empty() and v[i]>v[st.top()])
            {
                int x=st.top();
                st.pop();
                if(st.empty())
                {
                    break;
                }
                int diff_lenght=i-st.top()-1;
                ans+=(min(v[i],v[st.top()])-v[x])*diff_lenght;
            }
        st.push(i);     //pushed index
    }
    return ans;
}
 
int main()
{
    vector<int>v={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<traping_rainwater(v);

return 0;
}
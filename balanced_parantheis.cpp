#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

bool check(string str)
{
    stack<char>st;
    bool ans=true;

    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='{' || str[i]=='(' || str[i]=='[')
        {
            st.push(str[i]);
        }

        else if(str[i]==')')
        {
            if(st.top()=='(')
            {
                st.pop();
            }
            else
            {
                ans=false;
                break;
            }
        }
        else if(str[i]=='}')
        {
            if(st.top()=='{')
            {
                st.pop();
            }
            else
            {
                ans=false;
                break;
            }
        }
        else if(str[i]==']')
        {
            if(st.top()=='[')
            {
                st.pop();
            }
            else
            {
                ans=false;
                break;
            }
        }
    }

    if(!st.empty())
    {
        return false;
    }

    return ans;
}
 
int main()
{
  
 cout<< check("{({[]})}");

return 0;
}
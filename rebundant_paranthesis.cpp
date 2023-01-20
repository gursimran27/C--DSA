#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 
                //rebundant mean extra
                //ignore all the operands
 bool rebundant(string str)
 {
    int i;
    stack<char>st;
        rep(i,0,str.size())
        {
            // if(str[i]>=1 or str[i]<1 or (str[i]>='a' &&str[i]<='z') or (str[i]>='A' and str[i]<='Z'))
            // {
            //     continue;
            // }

             if(str[i]=='+' or str[i]=='-' or str[i]=='/' or str[i]=='*' or str[i]=='(')
            {
                st.push(str[i]);
            }

            else if(str[i]==')')
            {
                if(st.top()=='(')
                {
                    return true;
                }
                else{
                    while(st.top()!='(')
                    {
                        st.pop();//used to pop operators
                    }
                    st.pop();//used to pop open bracket
                }
            }
        }
        return false;
 }
int main()
{
    string str="((a+2))";
    if(rebundant(str)) //if it is true
    {
        cout<<"rebundant paranthesis\n";
    }
    else{
        cout<<"no rebumdant paranthesis";
    }
return 0;
}
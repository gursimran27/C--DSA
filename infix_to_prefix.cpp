#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

//first rverse the string then replace '(' with ')' and ')' with '(' and then convert it to postfix and return reverse of postfix exp
 

 int precedence(char ch)
{
    if(ch=='^')
        return 3;

     if(ch=='*' || ch=='/')
            return 2;
    
    if(ch=='+' || ch=='-')
             return 1;

    return -1;

}


string infixtoprefix(string str)
{
    reverse(str.begin(),str.end());
    
     stack<char>s;
    string result=""; //empty string
    for(int i=0;i<str.length();i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')) //for operand..as it is printed
        {
            result+=str[i]; //append
        }

        else if(str[i]==')')
                s.push(str[i]);

        else if(str[i]=='(')
        {
            while(!s.empty() && s.top()!=')')
            {
                result+=s.top();
                s.pop();
            }
            if(!s.empty())
            {
                s.pop(); //poped  ')'
            }
        }

        else //for operator
        {
           while(!s.empty() && (precedence(str[i])<=precedence(s.top())))
           {
                result+=s.top();
                s.pop();
           }
           
           s.push(str[i]);
        }
    }

    while(!s.empty())
    {
        result+=s.top();
        s.pop();
    }
   
   reverse(result.begin(),result.end());
    return result;
}


int main()
{
    cout<<infixtoprefix("(a-b/c)*(a/k-l)");
return 0;
}
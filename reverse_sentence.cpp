#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

void reverse(string str)
{
    stack<string>s;


    for(int i=0;i<str.length();i++)
    {
        string temp="";// store nothing
        while(str[i]!=' ' && i<str.length())
        {
            temp+=str[i];   //append
            i++;
        }
        s.push(temp);
    }


    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
 
int main()
{
     reverse("gursimran is a good coder");
return 0;
}
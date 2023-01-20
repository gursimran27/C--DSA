#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

void reverse(string str)
{
    stack<char>s;
        int i=0;
    while(i<str.length())
    {
        s.push(str[i]);
        i++;
    }
    
     while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
}

 
int main()
{
     reverse("gursimran is a good coder");
return 0;
}
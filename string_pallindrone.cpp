#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 
int main()
{
string  str;
cin>>str;
bool ans=true;
for(int i=0;i<str.size();i++)
{
   if(str[i]!=str[str.size()-i-1])
   {
        ans=false;
        break;
   }
}

(ans)?cout<<"pallindrone":cout<<"not";
return 0;
}
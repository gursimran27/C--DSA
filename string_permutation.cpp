#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 

 void permutution(string &str,int l,int r)
 {
    if(l==r-1)
    {
        cout<<str<<endl;
    }

   else{
    for(int i=l;i<r;i++)
    {
        swap(str[l],str[i]);
        permutution(str,l+1,r);
        swap(str[l],str[i]);
    }
   }
 }


int main()
{
  string str;
  cin>>str;
permutution(str,0,str.length());
return 0;
}
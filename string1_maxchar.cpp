#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 //maximum character in a string

int main()
{
   string str;
   cin>>str;

   int arr[26]={0};  //because 26 alphabtes

   for(int i=0;i<str.length();i++)
   {
    int a=0;
    if(str[i]>'a' and str[i]<'z'){
        a=str[i]-'a';
        arr[a]++;
   }
    else if(str[i]>'A' and str[i]<'Z'){
        a=str[i]-'A';
        arr[a]++;
    }
   }

   int maxi=INT_MIN;
    int ans;
   for(int i=0;i<26;i++){
    if(maxi<arr[i])
    {
        ans=i;
        maxi=arr[i];
    }
   }
   cout<<char(ans +'a');
return 0;
}
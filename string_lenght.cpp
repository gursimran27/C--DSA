#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 
int main()
{
       string s;
       getline(cin,s);

    //    cout<<s.length();
    
                    //or

    int count=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
            continue;
        
        count++;
    }
            

            cout<<count;
return 0;
}
#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 
int print_by_me(int n)
 {
    if(n==0)
    return 0;

    cout<< print_by_me(n-1)<<endl;
            return n;
    
 }


int print(int n)
{
    if(n<0)
    return 0;

    print(n-1);
      cout<<n<<endl;
}


int print_reverse(int n)
{
    if(n<0)
    return 0;

      cout<<n<<endl;
    print_reverse(n-1);
}




int main()
{
   int n;
   cin>>n;
 cout<<  print_by_me(n);

 cout<<endl<<endl<<endl;
    print(n);
 
 
 cout<<endl<<endl<<endl;
    print_reverse(n);
return 0;
}
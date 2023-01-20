#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

void towerofhanoi(int n,char src,char dest,char helper) //n indicates the number of disks
{
    if(n==0) return;
    towerofhanoi(n-1,src,helper,dest);
    cout<<"move disk "<<n<<" from "<<src<<" to "<<dest<<endl;
    towerofhanoi(n-1,helper,dest,src);
}
 
int main()
{
        towerofhanoi(3,'A','C','B'); 
return 0;
}
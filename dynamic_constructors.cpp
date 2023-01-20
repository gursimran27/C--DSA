#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

class A
{
    int *ptr;
    int l;
    public:
    A()
    {
    
     cin>>l;
     ptr=new int[l];
    }
    A(int *p,int n)
    {
        l=n;
        ptr=new int[l];
        ptr=p;
    }

    void display()
    {
        int i;
        rep(i,0,l)
        cout<<ptr[i]<<" ";
    }
};
 
int main()
{
    int *ptr=new int[5];
    ptr[0]=1;
    ptr[2]=2;
    ptr[3]=3;
    ptr[4]=4;
    ptr[1]=5;
    A o(ptr,5);
    o.display();
    
return 0;
}
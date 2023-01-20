#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

class node
{
    public:
    int data;
    node*left;
    node*right;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
}; 

bool check(node*root,node*min=NULL,node*max=NULL)
{
    if(root==NULL) return true;

    if(min!=NULL and root->data <= min->data) return false;
    if(max!=NULL and root->data >= max->data) return false;

    bool leftcheck=check(root->left,min,root);
    bool rightcheck=check(root->right,root,max);

    return (leftcheck  and rightcheck);
}


int main()
{
    node*root=new node(4);
    root->left=new node(2);
    root->right=new node(5);

    cout<<check(root);
return 0;
}
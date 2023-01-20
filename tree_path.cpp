#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

 class node
{
    public:
    int data;
    node*left;
    node*right;

    node(int val): data(val),left(NULL),right(NULL){ }
};


bool getpath(node*root,vector<int>&v,int n)
{
    if(root==NULL)  return false;

    v.push_back(root->data);
    if(root->data==n)  return true;

    if(getpath(root->left,v,n) or getpath(root->right,v,n)) return true;

    
        v.pop_back();
        return false;
    
}

int main()
{
        //     1      level 0
        //    / \    
        //   2   3       level 1
        //  / \  / \
        // 4   5 6  7      level 2
         //   /
        //  8                 level 3

    node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->left->right->right=new node(8);
    root->right=new node(3);
    root->right->left=new node(6);
    root->right->right=new node(7);

vector<int>v;

if(getpath(root,v,8))
{
    for(auto &x:v) 
       cout<<x<<" ";
}
else{
    cout<<"path doesnot exist";
}
return 0;
}
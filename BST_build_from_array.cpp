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


node* buildBST(node*root,int key)
{
    if(root==NULL)
    {
        return new node(key);
    }

    if(key<root->data)
        root->left=buildBST(root->left,key);

    if(key>root->data)
        root->right=buildBST(root->right,key);

    return root;

}

void inorder(node*root)
{
    if(root==NULL)  return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


int main()
{
    vector<int>v={5,1,3,4,2,7};
    node*root=NULL;

    root=buildBST(root,5);
    for(auto&x:v)
    {
        if(x==5) continue;
        buildBST(root,x);
    }

    inorder(root);
return 0;
}
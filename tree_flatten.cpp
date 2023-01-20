#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

//flatten a BT ...left of each node should be null and right should contain nodes acc to preorder sequence


 class node
{
    public:
    int data;
    node*left;
    node*right;

    node(int val)
    {
        data=val;
        left=right=NULL;
    }
};

void flatten(node*root)
{ 
    if(root==NULL or root->left==NULL or root->right==NULL)
        return;

    if(root->left!=NULL)
    {
        flatten(root->left);

        node*temp=root->right;
        root->right=root->left;
        root->left=NULL;

        node*t=root->right;
        while(t->right!=NULL)
        {
            t=t->right;
        }
        t->right=temp;
    }

    flatten(root->right);
}

void preorder(node*root)
{
    if(root==NULL) return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node*root)
{
    if(root==NULL) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


int main()
{
//         1
//        / \
//       2   3
//      / \  
//     4   5
//    /
//   6



node*root=new node(1);
root->left=new node(2);
root->left->left=new node(4);
root->left->left->left=new node(6);
root->right=new node(3);
root->left->right=new node(5);

preorder(root);
cout<<endl;
inorder(root);
cout<<endl; 

flatten(root);

preorder(root);
cout<<endl;
inorder(root);

return 0;
}
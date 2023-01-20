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
        left=right=NULL;
    }
};


void sumreplacement(node*root)
{
    if(root==NULL)
        return;

    sumreplacement(root->left);
    sumreplacement(root->right);

    if(root->left!=NULL)
    {
        root->data+=root->left->data;;
    }
    if(root->right!=NULL)
    {
        root->data+=root->right->data;;
    }

}

void preorder(node* root)
 {
    if(root==NULL)
    {
        return;
    }
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
 }


int main()
{
//         1
//        /  \
//       2    3
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
sumreplacement(root);
preorder(root);

return 0;
}
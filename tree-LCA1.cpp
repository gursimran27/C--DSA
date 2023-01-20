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
 //better approch
 node*lca(node*root,int n1,int n2)
 {
    if(root==NULL)  return NULL;

    if(root->data==n1 or root->data==n2)
        return root;

    node*left=lca(root->left,n1,n2);
    node*right=lca(root->right,n1,n2);

    if(left!=NULL and right!=NULL)
        return root;

    if(left==NULL and right==NULL)
            return NULL;

    if(left!=NULL and right==NULL)
       return left;

    if(right!=NULL and left==NULL)
       return right;
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

cout<<lca(root,4,6)->data;
return 0;
}
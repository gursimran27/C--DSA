#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 

class node
{
    public:
    int data;
    node*left;
    node*right;
    //constructor
    node(int val): data(val),left(NULL),right(NULL){ }
};

int height(node*root)
{
   if(root==NULL)
    return 0;

return (max(height(root->left),height(root->right)) +1);
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
// /
// 7


node*root=new node(1);
root->left=new node(2);
root->left->left=new node(4);
root->left->left->left=new node(6);
root->left->left->left->left=new node(7);
root->right=new node(3);
root->left->right=new node(5);


cout<<height(root);

return 0;
}
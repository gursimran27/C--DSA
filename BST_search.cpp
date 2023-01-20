#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
//search in BT is O(N).......N is number of nodes
//in BSR is O(log(N))

class node
{
    public:
    int data;
    node*left;
    node*right;

    node(int val): data(val),left(NULL),right(NULL){ }
};


node*search(node*root,int target)
{
    if(root==NULL) return NULL;

    if(root->data==target)  return root;

    if(target<root->data)
        return search(root->left,target);

    if(target>root->data)   
        return search(root->right,target);
}


int main()
{
        //     4      level 0
        //    / \    
        //   2   5       level 1
        //  / \   \
        // 1   3   6      level 2
                

    node* root=new node(4);
    root->left=new node(2);
    root->left->left=new node(1);
    root->left->right=new node(3);
    root->right=new node(5);
    root->right->right=new node(6);

    if(search(root,2)!=NULL)   cout<<"found";
    else{cout<<"not found";}
return 0;
}
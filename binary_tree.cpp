#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node*left;
    node*right;
       
    //constructor
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};


//preorder
void preorder(node* root)
{
    //base case
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
   
}



//inorder
void inorder(node* root)
{
    //base case
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
   
}




//postorder
void postorder(node* root)
{
    //base case
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
   
}




int main()
{
/*
        63
       /  \
     45    69
    /  \     \
   23   51    77
    \           \
      27         100
                /
               85
*/


    node* root=new node(63);
    root->left=new node(45);
    root->left->left=new node(23);
    root->left->right=new node(51);
    root->left->left->right=new node(27);
    root->right=new node(69);
    root->right->right=new node(77);
    root->right->right->right=new node(100);
     root->right->right->right->left=new node(85);
    
      
      preorder(root);
      cout<<endl;
      inorder(root);
      cout<<endl;
      postorder(root);

return 0;
}
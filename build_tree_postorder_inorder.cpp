#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 
//it will first build right then left subtree 
 class node
{
    public:
    int data;
    node*left;
    node*right;
    //constructor
    node(int val): data(val),left(NULL),right(NULL){ }
};


int search_inorder(int inorder[],int start,int end,int curr)
{
    for(int i=start;i<=end;i++)
    {
        if(inorder[i]==curr)
                return i;
    }
    return -1;
}

node* buildtree(int preorder[],int inorder[],int start,int end)
{
    //base case
    if(start>end)
    {
        return NULL;
    }

    static int idx=end;  //because postorder
    int curr=preorder[idx];
    idx--; //because postorder

    node* nodee=new node(curr);
    int pos=search_inorder(inorder,start,end,curr);
    if(start==end) //only one elemnt in inorder
    {
        return nodee;
    }
        //first right then left
    nodee->right=buildtree(preorder,inorder,pos+1,end);
    nodee->left=buildtree(preorder,inorder,start,pos-1);
    
    return nodee;
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
    int inorderr[]={4,2,1,5,3};
    int postorder[]={4,2,5,3,1};

    node* root=buildtree(postorder,inorderr,0,4);

    preorder(root);
return 0;
}
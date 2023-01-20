#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 
//it will first build left then right subtree
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

    static int idx=0;
    int curr=preorder[idx];
    idx++;

    node* nodee=new node(curr);
    int pos=search_inorder(inorder,start,end,curr);
    if(start==end) //only one elemnt in inorder
    {
        return nodee;
    }

    nodee->left=buildtree(preorder,inorder,start,pos-1);
    nodee->right=buildtree(preorder,inorder,pos+1,end);
    
    return nodee;
}


 void inorder(node* root)
 {
    if(root==NULL)
    {
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
 }


int main()
{
    int inorderr[]={1,2,4,5,3};
    int preorder[]={4,2,1,3,5};

    node* root=buildtree(preorder,inorderr,0,4);

    inorder(root);
return 0;
}
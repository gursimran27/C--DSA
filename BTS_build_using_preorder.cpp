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
        left=NULL;
        right=NULL;
    }
};

node* bulidBST(int preorder[],int *preorderidx,int key,int min,int max,int n)
{
    if(*preorderidx>=n) return NULL;

    node* root=NULL;
    if(key>min and key<max)
    {
        root=new node(key);
        *preorderidx+=1; //not *preorderidx++;
        if(*preorderidx<n)
            root->left=bulidBST(preorder,preorderidx,preorder[*preorderidx],min,key,n);

        if(*preorderidx<n)
            root->right=bulidBST(preorder,preorderidx,preorder[*preorderidx],key,max,n);
    }
    return root;
}
 

void preorder(node* root)
{
    if(root==NULL) return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


int main()
{
    int preorder1[]={10,2,1,13,11};
    int preorderidx=0;
    node*root=bulidBST(preorder1,&preorderidx,preorder1[0],INT_MIN,INT_MAX,5);


    preorder(root);
return 0;
}
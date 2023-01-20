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

node*buildBSTsortedarray(int arr[],int start,int end)
{
    if(start>end) return NULL;

    int mid=(start+end)/2;
    node* root=new node(arr[mid]);
    root->left=buildBSTsortedarray(arr,start,mid-1);
    root->right=buildBSTsortedarray(arr,mid+1,end);
    
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
    int arr[]={10,20,30,40,50};
    node*root=buildBSTsortedarray(arr,0,4);

    preorder(root);
return 0;
}
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


void printsubtreenodes(node*root,int k)
{
    if(root==NULL or k<0)  return;

    if(k==0)  cout<<root->data<<" ";

    if(root->left!=NULL){
        printsubtreenodes(root->left,k-1); 
    }

    if(root->right!=NULL){
        printsubtreenodes(root->right,k-1);
    }
}


int printnodesatK(node*root,node*target,int k)
{
    if(root==NULL) return -1;

    if(root==target){
        printsubtreenodes(root,k);
        return 0;
    }

    //checking left 
    int dl=printnodesatK(root->left,target,k);
    if(dl!=-1)
    {
        if(dl+1==k)
        {
            cout<<root->data<<" ";
        }
        else{
            printsubtreenodes(root->right,k-dl-2);
        }
        return 1+dl;
    }

    //checking right
    int dr=printnodesatK(root->right,target,k);
    if(dr!=-1)
    {
        if(dl+1==k)
        {
            cout<<root->data<<" ";
        }
        else{
            printsubtreenodes(root->left,k-dr-2);
        }
        return 1+dl;
    }
}

int main()
{
        //     1      level 0
        //    / \    
        //   2   3       level 1
        //  / \  / \
        // 4   5 6  7      level 2
         //   /
        //  8                 level 3

    node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->left->right->right=new node(8);
    root->right=new node(3);
    root->right->left=new node(6);
    root->right->right=new node(7);


    // printsubtreenodes(root,2);    //for testing this func

    printnodesatK(root,root->left,2);



return 0;
}

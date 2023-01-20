#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

       //find lca for those 2 nodes
       //then calculate their individual distance from lca
       //return d1+d2
 
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


node*lca(node*root,int n1,int n2)
{
    if(root==NULL) return NULL;

    //case 1
    if(root->data==n1 or root->data==n2)
        return root;

    //case 2  1 node exist in left subtree and 2 node in right subtree
    node*left=lca(root->left,n1,n2);
    node*right=lca(root->right,n1,n2);

    if(left!=NULL and right!=NULL)
            return root;
    
    //case 3  if n1 and n2 doesnot exist
    if(left==NULL and right==NULL)
        return NULL;

    //case 4  if n1 and n2 lies either in leftsubree only or in right subtree only
    if(left!=NULL and right==NULL)
        return lca(root->left,n1,n2);

     if(right!=NULL and left==NULL)
        return lca(root->right,n1,n2);
}


int distance(node*root,int k,int dis)   //here node*root is lca
{
    if(root==NULL) return -1;  //beacuse if lca and n1 or n2 are the root node then distance is 0
    //case 1  
    if(root->data==k) return dis;
    //case 2    k exist in left subtree
    int left=distance(root->left,k,dis+1);
        if(left!=-1)  return left;
    //case 3    k exist in right subtree
    return distance(root->right,k,dis+1);
}

int disbtwnode(node*root,int n1,int n2)
{
    node*LCA=lca(root,n1,n2);
    int d1=distance(LCA,n1,0);
    int d2=distance(LCA,n2,0);

    return d1+d2;
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


// cout<<lca(root,1,4)->data;    checking lca func


cout<<disbtwnode(root,6,5);
return 0;
}
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


bool getpath(node*root,vector<int>&v,int n)
{
    if(root==NULL)  return false;

    v.push_back(root->data);
    if(root->data==n)  return true;

    if(getpath(root->left,v,n) or getpath(root->right,v,n)) return true;

    
        v.pop_back();
        return false;
    
}


int lca(node*root,int n1,int n2)
{
    if(root==NULL)  return -1;

    vector<int>v1,v2;

    if(getpath(root,v1,n1)==false or getpath(root,v2,n2)==false)
        return -1;
    

    int i; //as i also want to use it outside the for loop
    for(i=0;i<(v1.size() and v2.size());i++)
    {
        if(v1[i]!=v2[i])  break;
    }

    return v1[i-1];  //or v2[i-1];
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

cout<<lca(root,4,5);
return 0;
}
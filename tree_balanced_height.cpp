#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
        //leaf nodes are always balanced
        //LH-RH<=1
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


 int height(node*root)
 {
    if(root==NULL)
        return 0;

    return max(height(root->left),height(root->right))+1;

 }

 bool balanced(node*root)
 { 
    if(root==NULL)
        return true;  //leaf nodes are always balanced

    if(balanced(root->left)==false)
        return false;
        
    if(balanced(root->right)==false)
        return false;

    int l_height=height(root->left);
    int r_height=height(root->right);

    if(abs(l_height-r_height)<=1)
        return true;
    else{
        return false;
    }

 }
int main()
{
        //      1
        //     /  
        //    2
        //   /
        //  3
      node*root=new node(1);
      root->left=new node(2);
      root->left->left=new node(3);

      if(balanced(root))
            cout<<"balanced tree"<<endl;
    else{
        cout<<"not balanced tree";
    }
return 0;
}
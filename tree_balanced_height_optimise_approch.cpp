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

 bool balanced(node*root,int* height)
 { 
    if(root==NULL)
        return true;  //leaf nodes are always balanced

    int l_height=0;
    int r_height=0;
    if(balanced(root->left,&l_height)==false)
        return false;
        
    if(balanced(root->right,&r_height)==false)
        return false;

  
    *height=max(l_height,r_height)+1;
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
     
     int height=0;
      if(balanced(root,&height))
            cout<<"balanced tree"<<endl;
    else{
        cout<<"not balanced tree";
    }
return 0;
}
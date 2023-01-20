#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
                //left hight+right height+1   ......1 is for current node

class node
{
    public:
    int data;
    node*left;
    node*right;
    //constructor
    node(int val): data(val),left(NULL),right(NULL){ }
};


int count_nodes(node*root)
{
    //base case
    if(root==NULL)
        return 0;
    
    return count_nodes(root->left) + count_nodes(root->right) +1;
}



int main()
{
  
        //     1      level 0
        //    / \    
        //   2   3       level 1
        //  / \  / \
        // 4   5 6  7      level 2


  node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->right=new node(5);

    root->right=new node(3);
    root->right->left=new node(6);
    root->right->right=new node(7);


    cout<<count_nodes(root);
return 0;
}
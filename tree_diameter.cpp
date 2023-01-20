#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
                    //diameter is the longest path between two leaf nodes

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

    return  max( height(root->left),height(root->right))+1;
}


int diameter(node*root)
{
    if(root==NULL)
        return 0;

    int l_height=height(root->left);
    int r_height=height(root->right);

    int curr_height=l_height+r_height+1;

    int l_dia=diameter(root->left);
    int r_dia=diameter(root->right);

    return (max(curr_height, max(l_dia,r_dia)));

}
 
int main()
{
//         1
//        /  \
//       2    3
//      / \  
//     4   5
//    /
//   6
// /
// 7


node*root=new node(1);
root->left=new node(2);
root->left->left=new node(4);
root->left->left->left=new node(6);
root->left->left->left->left=new node(7);
root->right=new node(3);
root->left->right=new node(5);


 cout<<diameter(root)<<endl;
return 0;
}
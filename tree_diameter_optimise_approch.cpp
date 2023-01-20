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
        left=right=NULL;
    }
};

int dia(node*root,int *height)
{
    if(root==NULL) 
    { 
        *height=0;
        return 0;
    }

    int l_height=0;
    int r_height=0;
    int l_dia=dia(root->left,&l_height);
    int r_dia=dia(root->right,&r_height);

    int curr_dia=l_height+r_height+1;
    *height=(max(l_height,r_height)+1);

    return max(curr_dia,max(l_dia,r_dia));
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

int height=0;
cout<<dia(root,&height)<<endl;
return 0;
}
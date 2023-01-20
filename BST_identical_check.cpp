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

bool identical(node*root1,node*root2)
{
    if(root1==NULL and root2==NULL)  return true;
    if(root1==NULL or root2==NULL)  return false; //structural differance

    else
    {
        bool cond1=root1->data==root2->data;
        bool cond2=identical(root1->left,root2->left);
        bool cond3=identical(root1->right,root2->right);

        if(cond1 and cond2 and cond3) return true;
        else{return false; }
    }
    
}


int main()
{
                //     12
                //    /  \
                //   9    15
                //  / \      
                // 5   10

        node*root=new node(12);
        root->left=new node(9);
        root->left->left=new node(5);
        root->left->right=new node(10);
        root->right=new node(15);

        node*root2=new node(2);
        root2->left=new node(1);
        root2->right=new node(3);

        cout<<identical(root,root)<<endl;
        cout<<identical(root,root2)<<endl;
return 0;
}
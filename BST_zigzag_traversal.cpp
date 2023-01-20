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

void zigzag(node*root)
{
    if(root==NULL) return;
    stack<node*>currlevel;
    stack<node*>nextlevel;
    bool lefttoright=true;

    currlevel.push(root);

    while(!currlevel.empty())
    {
        node*temp=currlevel.top();
        currlevel.pop();
        if(temp!=NULL)  cout<<temp->data<<" ";

                //left to right
        if(lefttoright)
        {
            if(temp->left!=NULL)  nextlevel.push(temp->left);
            if(temp->right!=NULL)  nextlevel.push(temp->right);
        }
        //right to left
        else
        {
            if(temp->right!=NULL)  nextlevel.push(temp->right);
            if(temp->left!=NULL)  nextlevel.push(temp->left);
        }

        if(currlevel.empty())
        {
            lefttoright=!lefttoright;
            swap(currlevel,nextlevel);
        }
    }
}



int main()
{
                //     12
                //    /  \
                //   9   s 15
                //  / \      
                // 5   10

        node*root=new node(12);
        root->left=new node(9);
        root->left->left=new node(5);
        root->left->right=new node(10);
        root->right=new node(15);

        zigzag(root);

    return 0;
}
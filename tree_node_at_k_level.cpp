#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 //using queue

 class node
{
    public:
    int data;
    node*left;
    node*right;
    //constructor
    node(int val): data(val),left(NULL),right(NULL){ }
};


void sumatKlevel(node*root,int k)
{
    if(root==NULL)
        return;

    queue<node*>q;
    q.push(root);
    q.push(NULL);
    int level=0;
    while(!q.empty())
    {
        node* curr=q.front();
        q.pop();
         
        if(curr!=NULL)
        {
           if(level==k)
           {
            cout<<curr->data<<" ";
           }

           if(curr->left!=NULL)
             q.push(curr->left);
           if(curr->right!=NULL)
              q.push(curr->right);  
        }

        else if(curr==NULL and !q.empty())
        {
            q.push(NULL);
            level++;
        }

    }
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

      sumatKlevel(root,2);
return 0;
}
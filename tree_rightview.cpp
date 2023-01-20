#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
                    //level order traversal approch...queue

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


void rightview(node*root)
{
    if(root==NULL)
        return;

    queue<node*>q;
    q.push(root);

    while(!q.empty())
    {
        int n=q.size();
        for(int i=0;i<n;i++)
        {
            node*curr=q.front();
            q.pop();

            if(i==n-1)          //represent right most node
                cout<<curr->data<<" ";

            if(curr->left!=NULL)
                q.push(curr->left);

            if(curr->right!=NULL)
                q.push(curr->right);
        }
    }
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



// node*root=new node(1);
// root->left=new node(2);
// root->left->left=new node(4);
// root->left->left->left=new node(6);
// root->right=new node(3);
// root->left->right=new node(5);




       //      1
       //     /  
       //    2
       //   /
       //  3
      node*root=new node(1);
      root->left=new node(2);
      root->left->left=new node(3);
rightview(root);

return 0;
}
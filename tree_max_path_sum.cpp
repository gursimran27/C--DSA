#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 //we have to maintain four things for each node...
class node
{
    public:
    int data;
    node*left;
    node*right;

    node(int val): data(val),left(NULL),right(NULL){ }
};

int maxpathsum(node*root,int &ans)
{
    if(root==NULL) return 0;

    int left=maxpathsum(root->left,ans);
    int right=maxpathsum(root->right,ans);

    int nodemax=max(max(root->data,root->data+left+right),max(root->data+left,root->data+right));
    ans=max(ans,nodemax);

    int pathmax=max(root->data,max(root->data+left,root->data+right));
    return pathmax;
}


int main()
{
        //     1      level 0
        //    / \    
        //  -12   3       level 1
        //  /    / \
        // 4    5   -6    level 2
                     

    node* root=new node(1);
    root->left=new node(-12);
    root->left->left=new node(4);
    root->right=new node(3);
    root->right->left=new node(5);
    root->right->right=new node(-6);

        int ans=INT_MIN;
    maxpathsum(root,ans);
    cout<<ans;
return 0;
}
#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
//we have 3 case
//case 1 if we want to delete leaf node...then simply delete it
//case 2 if we want to delete a node having 1 child then simply replace it with child
//case 3 if we want to delete a node havinf 2 childs then find indorder successor and replace that node with successor and delete node

class node
{
    public:
    int data;
    node*left;
    node*right;

    node(int val): data(val),left(NULL),right(NULL){ }
};


node*inordersuccussor(node*root)
{
    node*curr=root;
    while(curr and curr->left!=NULL) //left because of inorder
        curr=curr->left;

    return curr;
}


node*deletenode(node*root,int target)
{
    if(target<root->data)
       root->left=deletenode(root->left,target);

    else if(target>root->data)
       root->right=deletenode(root->right,target);

    else
    {
        //case 1
        if(root->left==NULL and root->right==NULL)
        {
        free(root);
        return NULL;
        }
        //case 2
        if(root->left==NULL)
        {
            node*temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL)
        {
            node*temp=root->left;
            free(root);
            return temp;
        }
                //case 3
        else
        {
            node*temp=inordersuccussor(root->right);//right because the indorder for root lies on right subtree of that root 
            root->data=temp->data;
            root->right=deletenode(root->right,temp->data);
        }
        return root;
    }
}

void inorder(node*root)
{
    if(root==NULL)  return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
        //     4      level 0
        //    / \    
        //   2   5       level 1
        //  / \   \
        // 1   3   6      level 2
                

    node* root=new node(4);
    root->left=new node(2);
    root->left->left=new node(1);
    root->left->right=new node(3);
    root->right=new node(5);
    root->right->right=new node(6);

    inorder(root);
    vector<int>v{3,6,1,5,2,4};
    cout<<endl;
    for(auto&x:v)
    {
        deletenode(root,x);
        inorder(root);
        cout<<"deleted "<<x<<endl;
    }
    // deletenode(root,3);
    // inorder(root);
return 0;
}
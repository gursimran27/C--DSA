#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //constructor
    node(int val){
        data=val;
        next=NULL;
    }
};

void insertathead(node* &head,int val)
{
    node* n=new node(val);
   if(head==NULL)
   {
    head=n;
    return;
   }

   n->next=head;
   head=n;
}


void insertattail(node* &head,int val)
{
    if(head==NULL)
    {
        insertathead(head,val);
        return;
    }
      node* n=new node(val);
      node* temp=head;
      while(temp->next!=NULL)
      {
        temp=temp->next;
      }

      temp->next=n;
}


void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}

node* reversek(node* &head , int k)
{
    node* prv=NULL;
    node* curr=head;
    node* next;
    int count=0;

    while(curr!=NULL && count<k)
    {
        next=curr->next;
        curr->next=prv;
        prv=curr;
        curr=next;
        count++;
    }

    if(head!=null)
    {
        head->next=reversek(next,k);
    }
      return prv;
}


int main()
{
    node* head=NULL;
   insertattail(head,1);
   insertattail(head,2);
   insertattail(head,3);
   insertattail(head,5);
    display(head);
    cout<<endl;
   int k=2;
  node* newhead=reversek(head,k);
    display(newhead);
return 0;
}
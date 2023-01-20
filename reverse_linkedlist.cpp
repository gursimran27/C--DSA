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
    cout<<"NULL"<<endl;
}

//revrese ll
node* reverse(node* &head)
{
    node* prv=NULL;
    node* curr=head;
    node* next;

    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prv;
        prv=curr;
        curr=next;
    }
     head=prv;//our actual linked list is modified as we use referance variable
    return head;
}


int main()
{
   node* head=NULL;
   insertattail(head,1);
   insertattail(head,2);
   insertattail(head,3);
   insertattail(head,5);
    display(head);
    node* new_head=reverse(head);
    cout<<endl;
    display(new_head);
    display(head);//actual head is also modified

     
return 0;
}
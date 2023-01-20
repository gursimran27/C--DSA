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

//to make cycle in LL
void makecycle(node* &head,int pos)
{
    node* temp=head;
    node* startnode;
     int count=1;

     while(temp->next!=NULL)
     {
        if(count==pos)
        {
            startnode=temp;
        }
        temp=temp->next;
        count++;
     }

     temp->next=startnode;
}
   
   //to detect a cycle 
   bool detectcycle(node* &head)
   {
    node* fast=head;
    node* slow=head;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;

        if(fast==slow)
        {
            return true;
        }
    }
     return false;
   }


   //to remove a cycle
   void removecycle(node* &head)
   {
    node* fast=head;
    node* slow=head;

    do{
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast);

       //move fast pionter to head
       fast=head;
       while(slow->next!=fast->next)
       {
        slow=slow->next;
        fast=fast->next;
       }
       slow->next=NULL;
   }

  int main()
  {
     node* head=NULL;
     insertattail(head,1);
     insertattail(head,2);
     insertattail(head,3);
     insertathead(head,5);
     display(head);

     makecycle(head,2);
     //display(head);

     cout<<endl<<detectcycle(head)<<endl;

     removecycle(head);
     cout<<endl<<detectcycle(head)<<endl;
  return 0;
  }
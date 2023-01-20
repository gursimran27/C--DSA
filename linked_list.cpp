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

//display
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

//searching
bool search(node* head,int target)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==target)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}


//deletion
void deleteathead(node* &head)
{
    node* todelete=head;
    head=head->next;
    delete todelete;
    
}

void deletion(node* &head,int val)
{
    if(head==NULL)
    {
        return;
    }

    if(head->next==NULL)//only 1 node present
    {
        deleteathead(head);
        return;
    }

    node* temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}


//insert after a data

void insertafterdata(node* &head,int x,int value)//x is the data after which we want to insert value
{
    node* n=new node(value);
    
    node* temp=head;
    
    while(temp->data!=x)
    {
        temp=temp->next;
        
         if(temp==NULL)
    {
        cout<<"invalid choice"<<endl;
        return;
    }
    }
   
    
    n->next=temp->next;
    temp->next=n;
}


//insert before data
void insertbeforedata(node* &head,int x,int value)
{
    node* n=new node(value);
    node* temp=head;
    
    if(x==head->data)//we want to insert before head
    {
        n->next=head;
        head=n;
        return;
    }
    while(temp->next->data!=x)
    {
        temp=temp->next;
        
        if(temp->next==NULL)
        {
            cout<<"invalid choice"<<endl;
            return;
        }

    }
    
    n->next=temp->next;
    temp->next=n;
}




int main(){
     node* head=NULL;
     insertattail(head,1);
     insertattail(head,2);
     insertattail(head,3);
     insertathead(head,5);
     //display(head);
     insertafterdata(head,1,10);
    // display(head);
     insertafterdata(head,10,21);
     display(head);
     insertbeforedata(head,2,9);
     display(head);
     //cout<<endl<<search(head,5)<<endl;
     //deletion(head,2);
     //display(head);
     //deletion(head,1);
     //deletion(head,3);
     //display(head);
     //deletion(head,5);
    //   deleteathead(head);
    //   deleteathead(head);
    //   deletion(head,3);
    //  display(head);
return 0;
}
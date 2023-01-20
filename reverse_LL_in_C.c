#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;

};

struct node* llcreation()
{
     struct node* p;
     p=(struct node*)malloc(sizeof(struct node));

     printf("enter a data\n");
     scanf("%d",&p->data);

     struct node* head=p;

     //till now we have created one node
    
   
     struct node* q;
     int x;
    do
    {
       q=(struct node*)malloc(sizeof(struct node));
       printf("enter a data\n");
       scanf("%d",&q->data);

       p->next=q;
       p=q;

       printf("enter 1 for more node creations\nelse enter any other number\n");
       scanf("%d",&x);
    }while(x==1);

     q->next=NULL;


    return head;
    
}

//to dipaly LL
void iterate(struct node* head)
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

//to reverse a LL
struct node* reversell(struct node* head)
{
    struct node* prv=NULL;
    struct node* curr=head;
    struct node* nxt;

    while(curr!=NULL)
    {
        nxt=curr->next;
        curr->next=prv;

        prv=curr;
        curr=nxt;
    }
      head=prv;
    return head;
}


int main()
{
    struct node*head=llcreation();
    iterate(head);
    struct node* newhead=reversell(head);
    iterate(newhead);
     iterate(head); 
     //our actual head is not modified as in C we cannot use referance variales
    return 0;
}
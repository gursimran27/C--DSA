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
    printf("NULL");
}

int main()
{
    struct node*head=llcreation();
    iterate(head);
    return 0;
}
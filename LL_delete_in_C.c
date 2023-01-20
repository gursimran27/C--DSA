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



//head delete
struct node* deletehead(struct node* head)
{
    struct node* temp=head;
    head=head->next;
    free(temp);
    return head;
}


//tail delete
struct node* deletetail(struct node*head)
{
     struct node* temp=head;
    // while(temp->next->next!=NULL)
    // {
    //    temp=temp->next;
    // }

    // struct node*tofree=temp->next;
    // temp->next=NULL;
    // free(tofree);


    //or
     
     struct node* temp2;
     while(temp->next!=NULL)
     {
        temp2=temp;
        temp=temp->next;
     }
        temp2->next=NULL;
        free(temp);
    return head;
}


//delete at anywhere
struct node*deleteany(struct node*head)
{
    int x;
    printf("which data u want to delete\n");
    scanf("%d",&x);
    

    if(x==head->data)
        {
          struct node*newhead=deletehead(head);
            return newhead;
        }

    struct node* temp=head;
    while(temp->next->data!=x)
    {
       temp=temp->next;
    }

    struct node*tofree=temp->next;
    temp->next=temp->next->next;
    free(tofree);
    return head;

}

int main()
{
    struct node*head=llcreation();
    iterate(head);
    // struct node*newhead1=deletehead(head);
    // iterate(newhead1);
    //  struct node*newhead2=deletetail(head);
    //  iterate(newhead2);
     struct node*newhead3=deleteany(head);
     iterate(newhead3);

    return 0;
}
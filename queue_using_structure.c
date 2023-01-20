#include<stdio.h>
#include<stdlib.h>

                    //queue using array with structure

    struct queue
    {
        int* arr;
        int front;
        int back;
        int size;
    };


   struct queue* queue_creation()
   {
    int n;
    struct queue* ptr=(struct queue*)malloc(sizeof(struct queue));
    printf("enter queue size\n");
    scanf("%d",&(ptr->size));
    
    ptr->front=-1;
    ptr->back=-1;
    ptr->arr=(int*)malloc((ptr->size)*sizeof(int));

        return ptr;
   };


    void push(struct queue*q,int val)
    {

        if(q->back==((q->size)-1))
        {
            printf("overflow\n");
            return;
        }

            q->back++;
            q->arr[q->back]=val;
        if(q->front==-1)
        {
            q->front++;
        }
    }


    void pop(struct queue*q)
    {
        if(q->front==-1 ||  (q->front)>(q->back))
        {
             printf("underflow\n");
            return;
        }

        // q->arr[q->front]=NULL;
        q->front++;
    }
    

    int peek(struct queue* q)
    {
        if(q->front==-1 ||  (q->front)>(q->back))
        {
            printf("underflow\n");
            return -1;
        }

        return q->arr[q->front];
    }

int main(){

        struct queue* queue=queue_creation();

        printf("%d\n",peek(queue));
        pop(queue);
        push(queue,10);
        push(queue,30);
        push(queue,22);
        printf("%d\n",peek(queue));
        pop(queue);
        printf("%d\n",peek(queue));
        pop(queue);
        pop(queue);
        printf("%d\n",peek(queue));
    
return 0;
}
#include <stdio.h>
#include<stdlib.h>

struct stack
{                   //by default public 
    int top;
     int size;
    int*arr;        //dynamic allocation in heap
};


struct stack* stack_creation()
{
       printf("enter size of stack\n");
       int n;
       scanf("%d",&n);
       struct stack* s=(struct stack*)malloc(sizeof(struct stack));
       s->top=-1;
       s->size=n;
       s->arr=(int*)malloc((s->size)*sizeof(int)); //dynamic array
       
       return s;
}


void push(struct stack*st,int val)
{
    if(st->top==(st->size)-1)
    {
        printf("stack overflow...not able to push %d\n",val);
              return;
    }
    
    st->top++;
  st->arr[st->top]=val;
  printf("successfully pushed\n");
}


void pop(struct stack*st)
{
    if(st->top==-1)
    {
        printf("no element to pop in stack\n");
        return;
    }

    st->arr[st->top]=NULL;
    st->top--;
     printf("pop successful \n");
}

void TOP(struct stack *st)
{
    if(st->top==-1)
    {
        printf("no element in stack\n");
        return;
    }

   printf("top element is=%d\n",st->arr[st->top]);
}



int main(){

   struct stack *stack=stack_creation();
    while(1)
    {
        int x;
      printf("------------------------------------------------------\n");
        printf("1 for push\n2 for pop\n3 for top element\nenter any other number to exit\n");
        scanf("%d",&x);
        
        if(x==1)
        {
            int y;
            printf("what do u want to insert\n");
            scanf("%d",&y);
            push(stack,y);
            
        }
        else if(x==2)
        {
            pop(stack);
           
        }
        else if(x==3)
        {
            TOP(stack);
        }
        else
        {
            break;
        }
    
    }
    

return 0;
}
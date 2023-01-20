#include<stdio.h>
#include<stdlib.h>

int top;
int size; //size of stack

int *stack_creation()
{
    printf("enter stack size\n");
    scanf("%d",&size);
     top=-1;
    int* st=(int*)malloc(size*sizeof(int));
    return st; 
    
};

void push(int *stack,int val)
{
    if(top==size-1)
    {
        printf("stack overflow...not able to push %d\n",val);
              return;
    }
    
    top++;
   stack[top]=val;
   printf("successfully pushed\n");
}

void TOP(int *stack)
{
    if(top==-1)
    {
        printf("no element in stack\n");
        return;
    }

   printf("top element is=%d\n",stack[top]);
}

void pop(int *stack)
{
    if(top==-1)
    {
        printf("no element to pop in stack\n");
        return;
    }

    // stack[top]=NULL;
    top--;
    printf("pop successful \n");
}

int main(){

    int *stack=stack_creation();
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
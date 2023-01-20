#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)


class node
{
    public:     //i want to access from outside
    int data;
    node *next;
//constructor
    node(int val):data(val),next(NULL) { }
};


class Queue
{
    node *front;
    node *back;

     public:
    Queue()
    {
        front=NULL;
        back=NULL;
    }

     void push(int val)             //insert at tail
     {
         //no overflow condition

         node* ptr=new node(val);  //brackets is used for parameterized constructor
         
         if(front==NULL)
         {
            front=ptr;
            back=ptr;
            return;
         }

         back->next=ptr;
         back=ptr;         
     }

     void pop() 
     {
        if(front==NULL)
        {
            cout<<"underflow"<<endl;
            return;
        }

        node *todelete=front;
        front=front->next;
        delete todelete;
     }

     int peek()
     {
        if(front==NULL)
        {
            cout<<"underflow"<<endl;
            return -1;
        }

          return front->data;
     }

     bool isempty()
     {
        if(front==NULL)
        {
            cout<<"underflow"<<endl;
            return 1;
        }

        return false;
     }
};
 
int main()
{
    
    Queue q;
   cout<<q.peek()<<endl;
   cout<<q.isempty()<<endl;
   q.pop();
   q.push(10);
   q.push(20);
   cout<<q.peek()<<endl;
   q.pop();
   cout<<q.peek()<<endl;
   cout<<q.isempty()<<endl;
   q.pop();
   cout<<q.peek()<<endl;
return 0;
}
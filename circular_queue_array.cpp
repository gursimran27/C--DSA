#include<iostream>
using namespace std;

class queue
{
   public:
   int *arr;
   int front;
   int back;

   queue()
   {
    arr=new int[5];
    front=-1;
    back=-1;
   }


   void push(int val)
   {
    if((front==0 && back>=4)|| front==back+1)
    {
       cout<<"overflow"<<endl;
       return;
    }
    if(front==-1)
    {
      front++;
    }

     if(front!=0 &&back==4)
     {
      back=0;
      arr[back]=val;
      return;
     }

     back++;
     arr[back]=val;

  }
   


   void pop()
   {
    if(front==-1)
    {
        cout<<"no element to pop"<<endl;
        return;
    }
  

    if(front==4)
    {
        arr[front]=NULL;
        front=0;
        return;
    }

    if(front==back)
    {
        arr[front]=NULL;
        cout<<"now queue is empty"<<endl;
        front=-1;
        back=-1;
        return;
    }
      arr[front]=NULL;
    front++;
   }


     void peek()
    {
        if(front==-1)
        {
            cout<<"no element in queue"<<endl;
            return;
        }
        cout<<arr[front]<<endl;
    }


    bool empty()
    {
      if(front==-1 )
      {
        return true;
      }
      return false;
    }


};
int main()
{
    queue q;
    q.push(10);
    //q.peek();
    //q.pop();
    q.push(1);
    //q.peek();
    //q.pop();
   // q.peek();
   q.push(100);
   q.push(20);
   q.push(22);
   q.pop();
   //q.peek();
   q.push(77);
   q.pop();
   q.pop();
   q.pop();
   q.peek();
   q.pop();
   q.peek();
   q.pop();
   //q.push(9);
cout<<q.empty();
return 0;
}
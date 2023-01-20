#include<iostream>
using namespace std;

class queue
{
  public:
  int *arr;
  int front;
  int back;

  //constructor
  queue()
  {
    arr=new int[5];
    front=-1;
    back=-1;
  }

  void push(int val)
  {
    if(back>=4)
    {
        cout<<"overflow"<<endl;
        return;
    }
    back++;
    arr[back]=val;
    if(front==-1)
    {
        front++;
    }
  }



    void pop()
    {
      if(front==-1 || front>back)
      {
        cout<<"no element to pop"<<endl;
        return;
      }
      arr[front]=NULL;
      front++;
    }



    void peek()
    {
        if(front==-1|| front>back)
        {
            cout<<"no element in queue"<<endl;
            return;
        }
        cout<<arr[front]<<endl;
    }



    bool empty()
    {
        if(front==-1 || front>back)
        {
            return true;
        }
        return false;
    }
  
};




int main()
{
     queue q;
     //q.pop();
     q.push(9);
     q.push(7);
    // q.peek();
    // q.pop();
     //q.peek();
    q.push(82);
    q.push(27);
    q.push(71);
    
    // q.peek();
    q.push(100);
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.peek();
return 0;
}
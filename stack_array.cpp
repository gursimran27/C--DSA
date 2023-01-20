#include<iostream>
using namespace std;

class stack
{
   public:
   int* arr;
   int top;

   //constructer
   stack()
   {
    arr=new int[5];
    top=-1;
   }

//push function
void push(int val)
{
    if(top==4)
    {
        cout<<"stackoverflow"<<endl;
        return;
    }

    top++;
    arr[top]=val;
}

//pop function
void pop()
{
    if(top==-1)
    {
        cout<<"no element to pop in stack"<<endl;
        return;
    }

    arr[top]=NULL;
    top--;
}

//top function
void TOP()
{
    if(top==-1)
    {
        cout<<"no element in stack"<<endl;
        return;
    }

    cout<<arr[top]<<endl;
}

//empty function
bool empty()
    {
        if(top==-1)
        {
            return true;
        }

        return false;
    }

};
int main()
{

  stack s;
  s.push(1);
  s.push(10);
//   s.TOP();
//   s.pop();
//   //s.TOP();
//   s.pop();
//   s.pop();
//   s.TOP();
s.push(11);
s.push(2);
s.push(4);
//s.TOP();
s.push(5);
cout<<s.empty()<<endl;
s.pop();
s.pop();
s.pop();
s.pop();
s.pop();
s.TOP();
s.pop();
cout<<s.empty()<<endl;
s.push(100);
s.TOP();
cout<<s.empty()<<endl;

return 0;
}
#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

class Stack
{
    queue<int>q1,q2;
    int N;
    public:
    //constructor
    Stack()
    {
        N=0;
    }

    //push
    void push(int val)
    {
        q1.push(val);
        N++;
    }

    //pop
    void pop()      //costly
    {
        if(q1.empty())
        {
            cout<<"no element in stack\n";
            return;
        }

        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        cout<<"poped "<<q1.front()<<endl;
        q1.pop(); //delete top element of stack
        N--;

        //swapping queue
        queue<int>temp=q1;
        q1=q2;
        q2=temp;

    }

    int top()
    {
        if(q1.empty())
        {
        cout<<"underflow\n";
        return -1;
        }
    

    while(q1.size()!=1)
    {
        q2.push(q1.front());
        q1.pop();
    }

    int top=q1.front();  //top element
    q1.pop();
    q2.push(top);
    //swapping queue
        queue<int>temp=q1;
        q1=q2;
        q2=temp;

        return top;
    }


    //size
    int size()
    {
         if(q1.empty())
        {
            cout<<"no element in stack\n";
            return N;
        }

        return N;
    }

    //empty
    bool empty()
    {
         if(q1.empty())
        {
            return true;
        }
        return false;
    }

};
 
int main()
{
 Stack s;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
    s.pop();


    s.push(30);
    cout<<s.empty()<<endl;
    s.push(10);
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.empty()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
return 0;
}



// no element in stack
// 0
// 1
// no element in stack
// 0
// 2
// 10
// poped 10
// 1
// 30
// poped 30
// 1
// no element in stack
// underflow
// -1
// no element in stack
// 0
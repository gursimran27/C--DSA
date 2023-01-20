#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 
                //queue using stack and call stack

class Queue
{
    stack<int>s;
    public:

    void push(int val)
    {
        s.push(val);
    }

    void pop()
    {
        if(s.empty())
        {
            cout<<"no element in queue\n";
            return;
        }

        int x=s.top();
        s.pop();
        if(s.empty())   //base case
        {
            return;
        }

        pop(); //recursion
        s.push(x); 
    }

    int peek()
    {
        if(s.empty())
        {
            cout<<"unerflow"<<endl;
            return -1;
        }

        int x=s.top();
        s.pop();

        if(s.empty())
        {
            s.push(x);      //note
            return x;
        }
        int item=peek(); //recursion
        s.push(x);
        return item;
    }
};
int main()
{
   
     Queue q;
     q.pop();
    cout<< q.peek()<<endl;
     q.push(1);
     q.push(20);
    cout<< q.peek()<<endl;
     q.pop();
    cout<< q.peek()<<endl;
    q.pop();
    q.pop();
    cout<< q.peek()<<endl;

return 0;
}
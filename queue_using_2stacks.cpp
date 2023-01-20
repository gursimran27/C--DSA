#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
                    //queue using two stacks
                    //pop/enqueue operatioin costly
class Queue
{
    stack<int>s1,s2;
    public:
    
    void push(int val)
    {
        s1.push(val);
    }

    void pop()
    {
        if(s1.empty() && s2.empty())
        {
            cout<<"no element in queue"<<endl;
            return;
        }

        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }

        }
            cout<<"poped "<<s2.top()<<endl;
            s2.pop();
    }


    int peek()
    {
         if(s1.empty() && s2.empty())
         {
            cout<<"underflow"<<endl;
            return -1;
         }

         if(s2.empty())
         {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
         }

         return s2.top();
    }


    bool empty()
    {
        if(s1.empty() && s2.empty())
        {
            return 1;
        }
        return 0;
    }
};
 
int main()
{

        Queue q;

        cout<<q.empty()<<endl;
        cout<<q.peek()<<endl;
        q.pop();



    cout<<endl;
        q.push(10);
        q.push(20);
        cout<<q.empty()<<endl;
        cout<<q.peek()<<endl;
        q.pop();
        cout<<q.peek()<<endl;
        cout<<q.empty()<<endl;
        q.pop();
        cout<<q.peek()<<endl;
        q.pop();
        cout<<q.empty()<<endl;



cout<<endl;
        q.push(30);
        cout<<q.peek()<<endl;
        q.pop();
        cout<<q.peek()<<endl;


return 0;
}
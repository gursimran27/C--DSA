#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

                //making push operation costly
 
 class Stack
 {
    int N;
    queue<int>q1,q2;
    public:
    //constructor
    Stack():N(0) {}

    void push(int val)//costly
    {
        q2.push(val);
            N++;

       while(!q1.empty())
       {
          q2.push(q1.front());
          q1.pop();
       }

       //swapping queues
       queue<int>temp=q1;
       q1=q2;
       q2=temp;

    }


//pop
    void pop()
    {
        if(q1.empty())
        {
            cout<<"no element in stack\n";
            return;
        }

        cout<<"poped "<<q1.front()<<endl;
        q1.pop();
        N--;
    }


//top
    int top()
    {
         if(q1.empty())
        {
            cout<<"underflow\n";
            return -1;
        }

        return q1.front();
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
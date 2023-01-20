#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)


                               //in this the head of LL is the top of stack
                    //eg 2->1->3   so if mean at top of stack is 2
                    //push is like insert at haed
class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};


class Stack
{
     node* top;
     public:
     Stack():top(NULL){}

     void push(int val)       //insert at head
     {
        //no overflow condition
        node* n=new node(val);
        if(top==NULL)
        {
            top=n;
            return;
        }
        n->next=top;
        top=n;
     }

     void pop()        
     {
        if(top==NULL)
        {
            cout<<"underflow"<<endl;
            return;
        }
         node* todelete=top;
         top=top->next;
         delete todelete;
        
     }

    int TOP()
     {
        if(top==NULL)
        {
            cout<<"underflow"<<endl;
            return -1;
        }

        return top->data;
     }

     bool empty()
     {
        if(top==NULL)
        {
            return 1;
        }

        return 0;
     }
};
 
int main()
{
        Stack st;
        cout<<st.TOP()<<endl;
        cout<<st.empty()<<endl;
        st.pop();


        st.push(20);
        st.push(30);
        cout<<st.TOP()<<endl;
        st.pop();
        cout<<st.empty()<<endl;
        cout<<st.TOP()<<endl;
        st.pop();
        cout<<st.TOP()<<endl;

return 0;
}
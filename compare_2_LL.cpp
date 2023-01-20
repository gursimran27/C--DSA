#include<iostream>
using namespace std;
//i have done this at hacker rank

bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

       queue<int>q1;
       queue<int>q2;
       
       SinglyLinkedListNode* temp1=head1;
       SinglyLinkedListNode* temp2=head2;
       
       while(temp1!=NULL)
       {
           q1.push(temp1->data);
           temp1=temp1->next;
       }
       
       while(temp2!=NULL)
       {
           q2.push(temp2->data);
           temp2=temp2->next;
       }
       
       if(q1.size()!=q2.size())
       return false;
       
       for(int i=1;i<q1.size();i++)
       {
           if(q1.front()!=q2.front())
           {
               return false;
           }
           
           
           q1.pop();
           q2.pop();
       }
       
       return true;
       
}
int main()
{

return 0;
}
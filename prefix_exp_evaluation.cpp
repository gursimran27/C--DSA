#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

//computer looks prefix exp from  right side

int prefixexpevaluation(string str)
{
    stack<int>s;

    for(int i=str.size()-1;i>=0;i--)
    {
        if(str[i]>='0' && str[i]<='9')
        {
             s.push(str[i]-'0');//converting char to int
        }
        else //for operator
        {
            int op1=s.top();
            s.pop();
            int op2=s.top();
            s.pop();


            switch(str[i])
            {
                case'+': s.push(op1+op2);
                        break;
                case'-': s.push(op1-op2);
                        break;
                case'*': s.push(op1*op2);
                        break;
                case'/': s.push(op1/op2);
                        break;
                case'^': s.push(pow(op1,op2));
                        break;
            }
        }
    }

    return s.top();
}
 
int main()
{
    cout<<prefixexpevaluation("-+7*45+20")<<endl;
return 0;
}
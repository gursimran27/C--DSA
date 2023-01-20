#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

class bank_account
{
    long int account_number;
    string name;
    string account_type;
    long long int balance;

    public:

    void initilize()
    {
        cout<<"enter account number"<<endl;
        cin>>account_number;
        cout<<"enter your name"<<endl;
        cin>>name;
        cout<<"enter your account type"<<endl;
        cin>>account_type;
        cout<<"enter balance"<<endl;
        cin>>balance;
    }

    void deposite_amount()
    {
        long long int x;
        cout<<"enter the amount to be deposited"<<endl;
        cin>>x;
        balance+=x;
    }

    void withdraw_amount()
    {
        long long int x;
        cout<<"enter amount to withdraw"<<endl;
        cin>>x;
        if(x>balance)
        {
            cout<<"SORRY...."<<endl<<"not enough balance in your account"<<endl<<"your account current balance is = "<<balance<<endl;
                    return;
        }

        balance-=x;
    }

    void display_balance()
    {
        cout<<"current acount balance :"<<balance<<endl;
    }


};
 
int main()
{
        bank_account o[10];
        for(int i=0;i<10;++i)
        {  
            cout<<endl<<i+1<<endl;
    
            o[i].initilize();
            o[i].withdraw_amount();
            o[i].display_balance();
            o[i].deposite_amount();
            o[i].display_balance();
        }
return 0;
}
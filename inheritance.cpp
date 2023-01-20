#include<iostream>
using namespace std;

class a
{
    private:
int i=10;

protected:
int j=9;

public:
int k=8;

};

class b: public a{
public:

void print()
{
    cout<<j;
}

};

// void print()
// {
//     cout<<i<<endl;
//     cout<<j<<endl;
//     cout<<k<<endl;
// }
int main(){
b obj;
// cout<<obj.j;
obj.print();
return 0;
}
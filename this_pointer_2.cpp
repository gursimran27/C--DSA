#include<iostream>
using namespace std;
# define rep(i,a,b) for(int i=a;i<b;i++)
 

 class A
 {
    int a;
    public:
    void set(int a)
    {
        this ->a=a;
    }

    void show()
    {
        cout<<a;
    }
 };
int main()
{
    A o;
    o.set(475);
    o.show();

return 0;
}
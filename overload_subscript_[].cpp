#include<iostream>
using namespace std;
//it work on online compiler
class A
{
    int arr[5];

    public:
    A ()
    {
       cout<<"enter 5 array element"<<endl;
       for(int i=0;i<5;i++)
       {
        cin>>arr[i];
       }
    }


    int operator [](int i)
    {
        return arr[i];
    }
};
int main()
{
      A o;

      for(int i=0;i<5;i++)
      {
        cout<<o[i]<<" ";
      }


      cout<<endl<<o[3];

return 0;
}
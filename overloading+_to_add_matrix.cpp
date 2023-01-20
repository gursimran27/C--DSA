#include<iostream>
using namespace std;

class A
{
    int arr[2][2];
    public:
    void set()
    {
        cout<<"enter matrix elementes"<<endl;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>arr[i][j];
            }
        }
    }
     void display();
    friend A operator +(A ,A);
};


A operator +(A t1, A t2)
{
    A temp;
    for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                temp.arr[i][j]=t1.arr[i][j] + t2.arr[i][j];
            }
        }
    return temp;
}


void A:: display()
{
    for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cout<<arr[i][j]<<"  ";
            }
            cout<<endl;
        }
}
int main()
{

    A o1,o2,o3;
    o1.set();
    o2.set();
    cout<<endl;
    o1.display();
    cout<<endl;
    o2.display();

    cout<<endl;

    o3=o1+o2;
    o3.display();
    

return 0;
}
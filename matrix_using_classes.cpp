#include<iostream>
using namespace std;

class matrix2;
class matrix1
{
    int arr[2][2];
    public:
    matrix1()
    {
        cout<<"enter matrix elements"<<endl;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>arr[i][j];
            }
        }
        
    }

    friend matrix1 sum(matrix1 ,matrix2);
    void display();
};


class matrix2
{
    int arr2[2][2];
    public:
    matrix2()
    {
        cout<<"enter matrix elements"<<endl;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>arr2[i][j];
            }
        }
        
    }
    friend matrix1 sum(matrix1 ,matrix2);

};



matrix1 sum(matrix1 t1,matrix2 t2)
{
    matrix1 temp;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                 temp.arr[i][j]=t1.arr[i][j] + t2.arr2[i][j];
            }
        }

        return temp;
};


void matrix1::display()
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
      matrix1 o1,o2;
      matrix2 o3;
   o1.display();
      o2=sum(o1,o3);
    o2.display();
return 0;
}
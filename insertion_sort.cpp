//O(n2)
#include<iostream>
using namespace std;
int main()
{

cout<<"enter size"<<endl;
int n;
cin>>n;

int arr[n];
cout<<"enter array elemnts"<<endl;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}


for(int i=1;i<n;i++)
{
    int key=arr[i];
    int j=i-1;
    while(j>=0 && arr[j]>key)
    {
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=key; //because of j--

}

for(int i=0;i<n;i++)
cout<<arr[i]<<" ";

return 0;
}


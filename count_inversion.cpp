#include<iostream>
using namespace std;
int main(){

int n;
cout<<"enter the size"<<endl;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int inv=0;
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]>arr[j])
        {
            inv++;
        }
    }
}

cout<<endl<<inv;
return 0;
}
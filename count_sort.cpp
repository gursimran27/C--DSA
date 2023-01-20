#include<iostream>
#include<climits>
using namespace std;

int countsort(int arr[],int n)
{
    
    int k=INT_MIN;
    for(int i=0;i<n;i++)
    {
        k=max(k,arr[i]);
    }
    
  int count[k];
  for(int i=0;i<k;i++)
  {
    count[k]=0;
  }
  for(int i=0;i<n;i++)
  {
    count[arr[i]]++;
  }

  for(int i=1;i<=k;i++)
  {
   count[i]+=count[i-1];
  }


  int output[n];
  for(int i=n-1;i>=0;i--)
  {
   output[count[arr[i]] - 1] = arr[i];
    count[arr[i]]--;

  }
cout<<"helo";
  for(int i=0;i<n;i++)
  {
    arr[i]=output[i];
  }
  
}


int main(){
int n;
cout<<"enter the size"<<endl;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

countsort(arr,n);
cout<<"sorted array is"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}
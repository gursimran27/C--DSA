#include<bits/stdc++.h>
#include<fstream>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 
int main()
{
      //reading simultaniously from 2 files

        ifstream fin1,fin2; 
        fin1.open("country.txt");
        fin2.open("capital.txt");

    string str1,str2;
     while(fin1.eof()==0 || fin2.eof()==0)
     {
            getline(fin1,str1);
            
            getline(fin2,str2);
            cout<<"capital of "<<str1<<" is= "<<str2<<endl;

     }
     fin1.close();
     fin2.close();


return 0;
}
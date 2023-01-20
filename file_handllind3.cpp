#include<bits/stdc++.h>
#include<fstream>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 
int main()
{
     ofstream fout("country.txt");
      
      fout<<"india\n"<<"america\n"<<"australia\n";
      fout.close();

      fout.open("capital.txt");
      fout<<"delhi is capital of india"<<endl<<"washington\n"<<"sydeny\n";
        fout.close(); //because at one time the output/input stream can be connected to one file onle


        //input
    ifstream fin;
    fin.open("country.txt");
    string str;

    cout<<"content of country file is:"<<endl;

    while(fin)
    {
        getline(fin,str);
        cout<<str<<endl;
    }

    fin.close();



    fin.open("capital.txt");
    cout<<"content of capital file is:"<<endl;
    while(fin.eof()==0)
    {
        getline(fin,str);
        cout<<str<<endl;
    }

return 0;
}
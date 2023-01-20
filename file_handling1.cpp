#include<bits/stdc++.h>
#include<fstream>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 
int main()
{
                        //file output
                        //opening file using constructor
    // ofstream fout("test1.txt");      //this would create a object fout of ofstream class which is used to manage the output stream
    //   fout<<"gursimran singh\n"<<"is a good coder\n";
    //   fout.close();




                        //input file
      ifstream fin("test1.txt"); //this would create a object fin of ifstream class which is used to manage the input stream
      string str;
    //   fin>>str;
    //   cout<<str;     //gursimran
      
    //   fin>>str;
    //   cout<<str;       //singh

    //   fin>>str;
    //   cout<<str;            //is


    //   cout<<endl;
    //   getline(fin,str);  //reads a line 
    //   cout<<str;
    //   getline(fin,str);  //reads a line 
    //   cout<<str;

    cout<<endl;
    // while(fin)  //detect eof
    // {
    //     // getline(fin,str);
    //     fin>>str;
    //     cout<<str;
    // }
        
                    //or

    while(fin.eof()==0)
    {
        getline(fin,str);
        cout<<str;
    }

return 0;
}
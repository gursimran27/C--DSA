#include<bits/stdc++.h>
#include<fstream>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 
int main()
{
        //opening file using open func

    ofstream fout;
    fout.open("test1.txt");
    fout<<"helo world.";
    fout.close();

    ifstream fin;
    fin.open("test1.txt");
    string str;
    while(fin.eof()==0)
    {
        getline(fin,str);
        cout<<str;
    }


    
return 0;
}
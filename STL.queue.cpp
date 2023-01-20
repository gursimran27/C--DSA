//this is implemting at online compilers

// #include<queue>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    q.push(10);
    q.push(2);
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.empty();
return 0;
}
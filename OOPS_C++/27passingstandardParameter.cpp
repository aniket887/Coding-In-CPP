#include<iostream>
using namespace std;
template<typename t>void display(t x,int y);
int main()
{
    display("anik",3);
    display("a",3);
    display(20,3);
}
template<typename t>void display(t x,int y){
    for(int i=1;i<=y;i++)
    {
        cout<<x<<endl;
    }
}


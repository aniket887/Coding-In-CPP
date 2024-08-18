#include<iostream>
using namespace std;
template<typename t1,class t2>void display(t1 x,t2 y);
int main()
{
    display("anik",3);
    display(24,3.5);
    display(7,3);
    display("anik",'a');
}
template<typename t1,class t2>void display(t1 x,t2 y){
    cout<<x<<" and "<<y<<endl;
}



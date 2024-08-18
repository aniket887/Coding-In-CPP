#include<iostream>
using namespace std;

template<typename mytype>
void display(mytype x){
    cout<<"you have pased "<<x<<endl;
}
int main()
{
    display(10);
    display(10.4);
    display("anilfrsgnjsef");
    display('a');
}

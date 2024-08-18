#include<iostream>
#include<exception>
using namespace std;
int main(){
    int a=10,b=0;
    int c;
    try{
        if(b==0){
            throw runtime_error("divide by zero error");
        }
        c=a/b;
        cout<<c<<endl;
    }catch(runtime_error &e){
        cout<<"exception occured"<<endl;
        cout<<e.what();
    }
    return 0;
}


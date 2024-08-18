#include<iostream>
#include<string>
using namespace std;
class base{
public:
    void func(){
        cout<<"base func"<<endl;
    }
};
class derive:public base{
public:
    void func(){
        cout<<"derive func"<<endl;
       // base::func();
    }
};
int main(){
    derive obj;
    obj.func();
    obj.base::func();
}




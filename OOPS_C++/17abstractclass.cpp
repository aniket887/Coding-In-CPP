#include<iostream>
#include<string>
using namespace std;
class base{
public:
    virtual void func()=0;
};
void base::func(){
    cout<<"base func"<<endl;
}
class derive:public base{
public:
    void func(){
        cout<<"derive func"<<endl;
        base::func();
    }
};
int main(){
    derive obj;
    obj.func();
}






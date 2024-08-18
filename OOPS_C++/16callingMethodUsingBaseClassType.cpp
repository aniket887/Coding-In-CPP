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
    }
};
void wt(base *p){
    p->func();
}
int main(){
    derive obj;
    obj.func();
    wt(&obj);
}





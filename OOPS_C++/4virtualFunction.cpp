#include"bits/stdc++.h"
using namespace std;
class base{
public:
    virtual void fun(){
        cout<<"base class"<<endl;
    }
    virtual void dis(){
        cout<<"base class"<<endl;
    }
};
class derive:public base{
public:
    void fun(){
        cout<<"derive class"<<endl;
    }
    void dis(){
        cout<<"derive  class"<<endl;
    }
};
int32_t main(){
    base *baseptr;
    derive d;
    baseptr=&d;
    baseptr -> fun();
    baseptr -> dis();
    return 0;
}

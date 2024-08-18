#include<iostream>
#include<string>
using namespace std;
class c1{
public:
    c1(){
        cout<<"c1 constructor"<<endl;
    }
    ~c1(){
        cout<<"c1 destructor"<<endl;
    }
};
class c2:public c1{
public:
    c2(){
        cout<<"c2 constructor"<<endl;
    }
    ~c2(){
        cout<<"c2 destructor"<<endl;
    }
};
int main(){
    c2 obj;
}



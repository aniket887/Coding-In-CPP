#include<iostream>
#include<string>
using namespace std;
class animal{
public:
    animal(){
        cout<<"animal constructor"<<endl;
    }
    int age;
    void func(){
        cout<<"animal func"<<endl;
    }
};
class tiger:virtual public animal{
public:
    tiger(){
        cout<<"tiger constructor"<<endl;
    }
};
class lion:virtual public animal{
public:
    lion(){
        cout<<"lion constructor"<<endl;
    }
};
class liger:public tiger,public lion{
public:
   liger(){
        cout<<"liger constructor"<<endl;
    }
};
int main(){
    liger ani;
    ani.func();
}







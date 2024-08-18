#include<iostream>
using namespace std;
class human{
public:
    human(){
        cout<<"constructor"<<endl;
    }
    ~human(){
        cout<<"destructor"<<endl;
    }
};

int main(){
    human *m;
    m=new human();
    delete m;
}



#include<iostream>
using namespace std;
class a{
public:
    aa(){
        cout<<"af\n";
    }
};
class b:public a{
public:
    bb(){
        cout<<"bf\n";
    }
};
int main(){
    b b1;
    b1.aa();
}

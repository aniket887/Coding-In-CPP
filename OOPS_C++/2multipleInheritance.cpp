#include<iostream>
using namespace std;
class a{
public:
    void afun(){
        cout<<"af\n";
    }
};
class b{
public:
    void bfun(){
        cout<<"bf\n";
    }
};
class c:public a,public b{
public:
    void cfun(){
        cout<<"cf\n";
    }
};
int main(){
    c c1;
    c1.afun();
    c1.bfun();
    c1.cfun();
}

#include<iostream>
using namespace std;
class a{
public:
    void afun(){
        cout<<"af\n";
    }
};
class b:public a{
public:
    void bfun(){
        cout<<"bf\n";
    }
};
class c{
public:
    void cfun(){
        cout<<"cf\n";
    }
};
class d:public b,public c{
public:
    void dfun(){
        cout<<"df\n";
    }
};
int main(){
    d d1;
    d1.afun();
    d1.bfun();
    d1.cfun();
    d1.dfun();
}

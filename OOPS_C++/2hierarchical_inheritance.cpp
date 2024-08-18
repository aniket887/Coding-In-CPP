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
class c:public a{
public:
    void cfun(){
        cout<<"cf\n";
    }
};
class d:public b{
public:
    void dfun(){
        cout<<"df\n";
    }
};
class e:public b{
public:
    void efun(){
        cout<<"ef\n";
    }
};
class f:public c{
public:
    void ffun(){
        cout<<"ff\n";
    }
};
class g:public c{
public:
    void gfun(){
        cout<<"gf\n";
    }
};
int main(){
    d d1;
    d1.afun();
    d1.bfun();
    d1.dfun();
    cout<<"=========="<<endl;
    e e1;
    e1.afun();
    e1.bfun();
    e1.efun();
       cout<<"=========="<<endl;
    f f1;
    f1.afun();
    f1.cfun();
    f1.ffun();
       cout<<"=========="<<endl;
    g g1;
    g1.afun();
    g1.cfun();
    g1.gfun();
}

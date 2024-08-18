#include"bits/stdc++.h"
using namespace std;
class base{
public:
      virtual void fun(){
        cout<<"fun base class"<<endl;
    }
      void dis(){
        cout<<"dis base class"<<endl;
    }
};
class derive:public base{
public:
    void fun(){
        cout<<" fun derive class"<<endl;
    }
    void dis(){
        cout<<"dis derive  class"<<endl;
    }
};
int32_t main(){
    derive d;
    d.fun();
    d.dis();
    base b;
    b.fun();
    b.dis();
}

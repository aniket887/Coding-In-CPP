#include"bits/stdc++.h"
using namespace std;
class A{
public:
    void fun(){
        cout<<"i'm funtion with no argument"<<endl;
    }
    void fun(int x){
        cout<<"i'm function with int argument  "<<x<<endl;
    }
    void fun(double x){
        cout<<"i'm function with double argument  "<<x<<endl;
    }
};
int32_t main(){
    A a;
    a.fun();
    a.fun(4);
    a.fun(3.5);
}

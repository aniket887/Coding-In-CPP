#include"bits/stdc++.h"
using namespace std;
class A{
public:
    A(){
        cout<<"i'm funtion with no argument"<<endl;
    }
    A(int x,double y){
        cout<<"i'm function with int argument  "<<x<<y<<endl;
    }
    A(double x,int y){
        cout<<"i'm function with double argument  "<<x<<y<<endl;
    }
    A(double x,int y,int z){
        cout<<"i'm function with double argument  "<<x<<y<<z<<endl;
    }
};
int32_t main(){
    A a;
    A s(5,8.7);
    A ss(4.5,8);
    A sss(4.9,8,78);
}


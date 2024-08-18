#include"bits/stdc++.h"
using namespace std;
    void fun(int n){
        cout<<"i'm funtion with int argument"<<n<<endl;
    }
    void fun(char c){
        cout<<"i'm function with char argument  "<<c<<endl;
    }
    void fun(double f){
        cout<<"i'm function with double argument  "<<f<<endl;
    }
int32_t main(){
    fun('a');
    fun(4);
    fun(3.5);
}

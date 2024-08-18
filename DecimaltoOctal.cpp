#include<iostream>
using namespace std;
int decimaltooctal(int n){
    int x=1,s=0;
    while(x<=n)
        x*=8;
    x/=8;
    while(x>0){
        int q=n/x;
        s=s*10+q;
        n-=q*x;
        x/=8;
    }
    return s;
}
int main(){
    int n;
    cout<<"enter decimal number:";
    cin>>n;
    cout<<"equivalent octal number is:"<<decimaltooctal(n)<<endl;
}

#include<iostream>
using namespace std;
int decimaltobinary(int n){
    int x=1,s=0;
    while(x<=n){
        x*=2;}
    x/=2;
    while(x>0){
        int q=n/x;
        s=s*10+q;
        n-=q*x;
        x/=2;
    }
    return s;
}
int main(){
    int n;
    cout<<"enter decimal number:";
    cin>>n;
    cout<<"equivalent binary number is:"<<decimaltobinary(n)<<endl;
    return 0;
}

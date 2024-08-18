#include<iostream>
using namespace std;
int octaltodecimal(int n){
    int r,x=0,y=1;
    while(n>0){
        r=n%10;
        x+=r*y;
        y*=8;
        n/=10;
    }
    return x;
}
int main(){
    int n;
    cout<<"enter octal number:";
    cin>>n;
    cout<<"equivalent decimal number is:"<<octaltodecimal(n)<<endl;
}

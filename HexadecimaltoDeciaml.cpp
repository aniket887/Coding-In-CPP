#include<iostream>
using namespace std;
int hexadecimaltodecimal(string n){
    int x=0,y=1;
    int s=n.size();
    for(int i=s-1;i>=0;i--){
        if(n[i]>='0'&&n[i]<='9'){
            x+=y*(n[i]-'0');
        }
        else if(n[i]>='A'&&n[i]<='F'){
            x+=y*(n[i]-'A'+10);
        }
        y=y*16;
    }
    return x;
}
int main(){
        string n;
        cout<<"enter hexadecimal number:";
        cin>>n;
        cout<<"equivalent decimal number is:"<<hexadecimaltodecimal(n)<<endl;
}

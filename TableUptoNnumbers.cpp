#include<iostream>
using namespace std;
int main(){
    int c;
    cout<<"enter number:";
    cin>>c;
    for(int i=1;i<=c;i++){
        for(int j=1;j<=10;j++){
            cout<<i<<"*"<<j<<"="<<i*j<<endl;
        }
        cout<<endl;
    }
    return 0;
}


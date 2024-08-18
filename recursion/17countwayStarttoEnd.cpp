#include<iostream>
using namespace std;
int countpath(int s,int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int cont=0;
    for(int i=1;i<6;i++){
        cont+=countpath(s+i,e);
    }
    return cont;
}
int main(){
    cout<<countpath(0,3)<<endl;
    return 0;
}

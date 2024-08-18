#include<iostream>
using namespace std;
void des(int n){
    if(n==1){
        cout<<1<<endl;
        return ;
    }
    cout<<n<<"\t";
    des(n-1);
}
void asc(int n){
    if(n==1){
        cout<<1<<"\t";
        return ;
    }
    asc(n-1);
    cout<<n<<"\t";
}
int main(){
    int n;
    cin>>n;
    cout<<"descending:";
    des(n);
    cout<<endl;
    cout<<"ascending:";
    asc(n);
    return 0;
}

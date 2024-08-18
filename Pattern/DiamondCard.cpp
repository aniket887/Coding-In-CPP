#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    cout<<"how many rows";
    cin>>n;
    m=(2*n-1)/2;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cout<<"*";
        }
        for(j=1;j<=2*i-1;j++){
            if(j==1||j==2*i-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for(j=1;j<=m;j++){
            cout<<"*";
        }
        cout<<endl;
        m--;
    }
    m=0;
    for(i=n;i>=1;i--){
        for(j=1;j<=m;j++){
            cout<<"*";
        }
        for(j=1;j<=2*i-1;j++){
            if(j==1||j==2*i-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for(j=1;j<=m;j++){
            cout<<"*";
        }
        cout<<endl;
        m++;
    }
    return 0;
}

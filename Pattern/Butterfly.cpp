#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"how many rows";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        int m=2*n-2*i;
        for(j=1;j<=m;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        int m=2*n-2*i;
        for(j=1;j<=m;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

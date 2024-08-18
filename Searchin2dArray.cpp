#include<iostream>
using namespace std;
int main(){
    int r,c,a;
    cout<<"enter row and column:";
    cin>>r>>c;
    cout<<"enter elements\n";
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"enter element "<<i+1<<j+1<<":";
            cin>>arr[i][j];
        }
    }
    cout<<"enter element u want to find:";
    cin>>a;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==a){
                cout<<a<<" element found at place "<<i+1<<"th row "<<j+1<<"th column";
            }
        }
    }
    return 0;
}

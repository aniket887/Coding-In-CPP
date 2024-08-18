#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter row and column of square matrix only:";
    cin>>r>>c;
    cout<<"enter elements\n";
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"enter element a"<<i+1<<j+1<<":";
            cin>>arr[i][j];
        }
    }
    cout<<"your matrix is:-\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(int i=0;i<r;i++){
        for(int j=i;j<c;j++){
            int t=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=t;
        }
    }
    cout<<"your matrix after transpose is:-\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

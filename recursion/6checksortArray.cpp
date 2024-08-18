#include<iostream>
using namespace std;
bool asd(int arr[],int n){
    if(n==1){
        return true;
    }
    return (arr[0]<arr[1] && asd(arr+1,n-1));
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(asd(arr,n)){
        cout<<"yes array is sorted"<<endl;
    }
    else{
        cout<<"not sorted array";
    }
    return 0;
}

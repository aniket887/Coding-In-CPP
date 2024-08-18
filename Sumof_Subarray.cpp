#include<climits>
#include<iostream>
using namespace std;
void sumsubarray(int arr[],int n){
    int curr=0,x=0;
    cout<<"individual sub arrays sum is:-"<<endl;
    for(int i=0;i<n;i++){
        curr=0;
        for(int j=i;j<n;j++){
            curr+=arr[j];
            cout<<curr<<"\t";
            x+=curr;
        }
    }
    cout<<endl;
    cout<<"total is:"<<x<<endl;
}
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sumsubarray(arr,n);
    return 0;
}


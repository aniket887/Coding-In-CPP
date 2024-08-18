#include<iostream>
#include<algorithm>
using namespace std;
void show(int a[],int x)
{
    for(int i=0;i<x;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int a[]={2,5,1,4,8,3,9};
    int m=sizeof(a)/sizeof(a[0]);
    show(a,m);
    sort(a,a+m);
    show(a,m);
    if(binary_search(a,a+m,8)){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

}


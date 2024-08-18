#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j;
    cout<<"Enter Range";
    cin>>n>>m;
    for(i=n;i<=m;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            cout<<i<<endl;
        }
    }
    return 0;
}

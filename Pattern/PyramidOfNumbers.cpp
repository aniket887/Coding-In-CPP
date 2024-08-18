#include<iostream>
using namespace std;
int main()
{
    int i,j,k,r;
    cout<<"rows:";
    cin>>r;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r-i;j++)
        {
            cout<<" ";
        }
        k=i;
        for(;j<=r;j++)
        {
            cout<<k--;
        }
        k=2;
        for(;j<=r+i-1;j++)
        {
            cout<<k++;
        }
        cout<<endl;
    }
    return  0;
}





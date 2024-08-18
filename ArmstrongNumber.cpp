#include<iostream>
using namespace std;
int main()
{
    int a,n,r,s=0;
    cin>>n;
    a=n;
    while(n>0)
    {
        r=n%10;
        s=s+r*r*r;
        n=n/10;
    }
    if(a==s)
    {
        cout<<"armstrng";
    }
    else
    {
        cout<<"not armstrong";
    }
    return 0;
}



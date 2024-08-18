#include <iostream>
using namespace std;

int fact(int x)
{
    int i,s=1;
    for(i=1;i<=x;i++)
    {
        s=s*i;
    }
    return s;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}

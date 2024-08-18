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
    int a,b;
    cin>>a>>b;
    int ans=fact(a)/(fact(b)*fact(a-b));
    cout<<ans<<endl;
    return 0;
}

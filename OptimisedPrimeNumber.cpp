#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int x)
{
    int j;
    for(j=2;j<=sqrt(x);j++)
    {
        if(x%j==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a,b,i;
    cin>>a>>b;
    for(i=a;i<=b;i++)
    {
        if(isprime(i))
        {
            if(i>=1)
            {
                cout<<i<<endl;
            }
            else
            {
                for(int m=i;m<b;m++)
                {
                    if(i>0)
                    {
                        cout<<i<<endl;
                    }
                }
            }
        }
    }
    return 0;
}

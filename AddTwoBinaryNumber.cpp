#include<bits/stdc++.h>
using namespace std;
int revers(int n)
{
    int s=0;
    while(n>0)
    {
        int q=n%10;
        s=s*10+q;
        n/=10;
    }
    return s;
}
int addbinary(int a, int b)
{
    int s=0;
    int p=0;
    while(a>0 && b>0)
    {
        if(a%2==0 && b%2==0)
        {
            s=s*10 +p;
            p=0;
        }
        else if((a%2==0 && b%2==1) || (a%2==1 && b%2==0))
        {
            if(p==1)
            {
                s=s*10+0;
                p=1;
            }
            else
            {
                s=s*10+1;
                p=0;
            }
        }
        else
        {
            s=s*10+s;
            p=1;
        }
        a/=10;
        b/=10;
    }
    while(a>0)
    {
        if(p==1)
        {
            if(a%2==1)
            {
                s=s*10+0;
                p=1;
            }
            else
            {
                s=s*10+1;
                p=0;
            }
        }
        else
            s=s*10+(a%2);
        a/=10;
    }
    while(b>0)
    {
        if(p==1)
        {
            if(b%2==1)
            {
                s=s*10+0;
                p=1;
            }
            else
            {
                s=s*10+1;
                p=0;
            }
        }
        else
        {
            s=s*10+(b%2);
        }
        b/=10;
    }
    if(p==1)
        s=s*10+1;
    s=revers(s);
    return s;
}
int32_t main()
{
    int a,b;
    cout<<"Enter Two Binary Number:";
    cin>>a>>b;
    cout<<addbinary(a,b)<<endl;
}


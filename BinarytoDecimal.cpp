#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarytodecimal(int n)
{
    int s=0,x=1;
    while(n>0)
    {
        int y=n%10;
        s+=x*y;
        x*=2;
        n/=10;
    }
    return s;
}

int octaltodecimal(int n)
{
    int s=0,x=1;
    while(n>0)
    {
        int y=n%10;
        s+=x*y;
        x*=8;
        n/=10;
    }
    return s;
}

int hexadecimaltodecimal(string n)
{
    int p=0,x=1;
    int s=n.size();
    for(int i=s-1;i>=0;i--)
    {
        if(n[i]>='0'&&n[i]<='9')
        {
            p+=x*(n[i]-'0');
        }
        else if(n[i]>='A'&&n[i]<='F')
        {
            p+=x*(n[i]-'A'+10);
        }
        x=x*16;
    }
    return p;
}

int decimaltobinary(int n)
{
    int x=1,s=0;
    while(x<=n)
        x*=2;
    x/=2;

    while(x>0)
    {
        int q=n/x;
        n-=q*x;
        x/=2;
        s=s*10+q;
    }
    return s;
}

int decimaltooctal(int n)
{
    int x=1,s=0;
    while(x<=n)
        x*=8;
    x/=8;

    while(x>0)
    {
        int q=n/x;
        n-=q*x;
        x/=8;
        s=s*10+q;
    }
    return s;
}

string decimaltohexadecimal(int n)
{
    int x=1;
    string ans="";
    while(x <=n)
        x*=16;
    x/=16;
    while(x>0)
    {
        int q=n/x;
        n-=q*x;
        x/=16;
        if(q<=9)
            ans=ans+to_string(q);
        else
        {
            char c='A' + q -10;
            ans.push_back(c);
        }
    }
    return ans;
}

int32_t main()
{
    int z;
    cout<<"conversion programs \n"<<endl;
    cout<<"1=convert binary to decimal"<<endl;
    cout<<"2=convert octal to decimal"<<endl;
    cout<<"3=convert hexadecimal to decimal"<<endl;
    cout<<"4=convert decimal to binary"<<endl;
    cout<<"5=convert decimal to octal"<<endl;
    cout<<"6=convert decimal to hexadecimal"<<endl;
    cout<<" "<<endl;
    cout<<"enter program number which u to want to run:";
    cin>>z;
    if(z==1)
    {
        int n;
        cout<<"enter binary number:";
        cin>>n;
        cout<<"equivalent decimal number is:"<<binarytodecimal(n)<<endl;
    }
    if(z==2)
    {
        int n;
        cout<<"enter octal number:";
        cin>>n;
        cout<<"equivalent decimal number is:"<<octaltodecimal(n)<<endl;
    }
    if(z==3)
    {
        string n;
        cout<<"enter hexadecimal number:";
        cin>>n;
        cout<<"equivalent decimal number is:"<<hexadecimaltodecimal(n)<<endl;
    }
    if(z==4)
    {
        int n;
        cout<<"enter decimal number:";
        cin>>n;
        cout<<"equivalent binary number is:"<<decimaltobinary(n)<<endl;
    }
    if(z==5)
    {
        int n;
        cout<<"enter decimal number:";
        cin>>n;
        cout<<"equivalent octal number is:"<<decimaltooctal(n)<<endl;
    }
    if(z==6)
    {
        int n;
        cout<<"enter decimal number:";
        cin>>n;
        cout<<"equivalent hexadecimal number is:"<<decimaltohexadecimal(n)<<endl;
    }

    return 0;
}


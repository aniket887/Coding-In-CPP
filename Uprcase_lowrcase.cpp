


#include<iostream>
#include<string>
using namespace std;
int lwr(string str)
{
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]+=32;
        }
    }
        cout<<str<<endl;
}
int upr(string str)
{
    int x=str.size();
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]-=32;
        }
    }
        cout<<str<<endl;
}
int main()
{
    string str="ahdjhfsrv";
    lwr(str);
    upr(str);
    return 0;
}




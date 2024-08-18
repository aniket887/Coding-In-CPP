#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int max,min;
    if(a>b)
    {
        max=a;
        min=b;
    }
    else
    {
        max=b;
        min=a;
    }
    cout<<"max:"<<max<<endl;
    cout<<"min:"<<min<<endl;
    return 0;
}


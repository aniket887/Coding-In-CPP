#include<iostream>
using namespace std;
int main()
{
    float a,b;
    char op;
    cout<<"enter two number"<<" and operator between them"<<endl;
    cin>>a>>op>>b;
    switch(op)
    {
    case '+':cout<<a+b<<endl;
        break;
    case '-':cout<<a-b<<endl;
        break;
    case '*':cout<<a*b<<endl;
        break;
    case '/':cout<<a/b<<endl;
        break;
    default:cout<<"enter another operator"<<endl;
        break;
    }
    return 0;
}

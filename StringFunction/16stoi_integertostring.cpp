


#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="768";
    int x=stoi(s1);
    cout<<x+2<<endl;

    int y=989;
    string z=to_string(y);
    cout<<z<<endl;
    cout<<to_string(y)<<endl;
    cout<<y+2<<endl;
    cout<<y+"2"<<endl;
    cout<<to_string(y)+"2"<<endl;
    cout<<z<<endl;
    cout<<z+"2"<<endl;
    cout<<z<<endl;
    string m=z+"2";
    cout<<m;
    return 0;
}



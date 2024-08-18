#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="family";
    cout<<s1.at(1)<<endl;
    cout<<s1[3]<<endl;
    s1[3]='x';
    cout<<s1[3]<<endl;
    cout<<s1;

    return 0;
}




#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="nincompoop";
    string s=s1.erase(3,3);
    cout<<s1<<endl;
    cout<<s<<endl;
    s1.erase(2,1);
    cout<<s1<<endl;

    string a="nincompoop";
    a.erase(3,3);
    cout<<a<<endl;
    return 0;
}



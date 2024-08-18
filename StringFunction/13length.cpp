


#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="nincompoop";
    cout<<s1.length()<<endl;
    cout<<s1.size()<<endl;
    string s2="helloworld";
    for(int i=0;i<s2.length();i++)
    {
        cout<<s2[i]<<" ";
    }
    return 0;
}



#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="fam";
    string s2="ily";
    s1.append(s2);
    cout<<s1<<endl;
    string s3=" is love";
    s3.push_back('a');
    cout<<s1+s3<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    return 0;
}


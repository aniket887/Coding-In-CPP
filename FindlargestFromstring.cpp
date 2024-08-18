#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="234667324";
    sort(s.begin(), s.end(), greater<int>());
    cout<<s<<endl;
    return 0;
}




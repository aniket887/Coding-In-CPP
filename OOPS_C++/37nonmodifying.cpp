#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int a[10]={2,1,4,8,2,3,6,8,2,3};
    int c=count(a,a+10,2);
    vector<int>v(a,a+10);
    int cc=count(v.begin(),v.end(),3);
    cout<<c<<" "<<cc;
}


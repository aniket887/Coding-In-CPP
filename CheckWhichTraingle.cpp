#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter three sides of triangle:\n";
    cin>>a>>b>>c;
    if(a==b && b==c)
    {
        cout<<"equilateral\n";
    }
    else if(a==b || b==c || a==c)
    {
        cout<<"isosceles\n";
    }
    else
    {
        cout<<"scalene\n";
    }
    return 0;
}




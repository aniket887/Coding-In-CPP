#include<iostream>
#include<algorithm>
using namespace std;
void show(int a[])
{
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
}
int main()
{
    int a[10]={2,5,1,4,8,3,9,6,8,3};
    sort(a,a+10);
    show(a);

}

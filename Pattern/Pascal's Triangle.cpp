#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n,m=1;
    cout<<"how rows";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            cout<<" ";
        }
        for(j=0;j<=i;j++)
        {
            if(j==0||i==0)
            {
                m=1;
            }
            else
            {
                m=m*(i-j+1)/j;
            }
            cout<<m<<" ";
        }
        cout<<endl;
    }
    return 0;
}




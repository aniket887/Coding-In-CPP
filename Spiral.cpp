#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter row and column:";
    cin>>r>>c;
    cout<<"enter elements\n";
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"enter element "<<i+1<<j+1<<":";
            cin>>a[i][j];
        }
    }
    cout<<"your array is:-\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    int rs=0,re=r-1,cs=0,ce=c-1;
    cout<<"\n your spiral form is:-\n";
    while(rs<=re && cs<=ce)
    {
        //for row start
        for(int col=cs;col<=ce;col++)
            cout<<a[rs][col]<<" ";
        rs++;
        //for column end
        for(int row=rs;row<=re;row++)
            cout<<a[row][ce]<<" ";
        ce--;
        //for row end
        for(int col=ce;col>=cs;col--)
            cout<<a[re][col]<<" ";
        re--;
        //for row start
        for(int row=re;row>=rs;row--)
            cout<<a[row][cs]<<" ";
        cs++;
    }
    return 0;
}

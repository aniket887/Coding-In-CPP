#include<iostream>
using namespace std;
string decimaltohexadecimal(int n){
    int x=1;
    string ans="";
    while(x <=n)
        x*=16;
    x/=16;
    while(x>0){
        int q=n/x;
        if(q<=9)
            ans=ans+to_string(q);
        else
        {
            char c='A' + q -10;
            ans.push_back(c);
        }
        n-=q*x;
        x/=16;
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter decimal number:";
    cin>>n;
    cout<<"equivalent hexadecimal number is:"<<decimaltohexadecimal(n)<<endl;
}

#include<iostream>
using namespace std;
void revers(string s){
    if(s.length()==0){
        return ;
    }
    revers(s.substr(1));
    cout<<s[0];
}
int main(){
    revers("aniket");
    return 0;
}

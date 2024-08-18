#include<iostream>
using namespace std;
void replac(string s){
    if(s.length()==0){
        return ;
    }
    if(s[0]=='p'&&s[1]=='i'){
        cout<<"3.14";
        replac(s.substr(2));
    }
    else{
        cout<<s[0];
        replac(s.substr(1));
    }
}
int main(){

    replac("ppippiiipi");
    return 0;
}

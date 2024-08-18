#include<iostream>
using namespace std;
string moveend(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=moveend(s.substr(1));
    if(ch=='x'){
        return ans+ch;
    }
    return ch+ans;
}
int main(){
   cout<<moveend("axxbdxxcfxxxfsf");
    return 0;
}



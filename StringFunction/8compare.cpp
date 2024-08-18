#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1="xyz";
    string s2="abc";
    cout << s1.compare(s2) << endl;
    string x="abc";
    string y="xyz";
    cout << x.compare(y) << endl;
    string m="abc";
    string n="abc";
    cout << m.compare(n) << endl;
    string p="xyz";
    string o="xyz";
    if(p.compare(o)==0){
        cout<<"strings are equal"<<endl;
    }
    if(!p.compare(o)){
        cout<<"strings are equal"<<endl;
    }
    return 0;
}



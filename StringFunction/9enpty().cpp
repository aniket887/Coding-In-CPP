#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1="nanapop";
    cout<<s1<<endl;
    if(!s1.empty()){
        cout<<"s1 is not empty"<<endl;
    }
    s1.clear();
    if(s1.empty()){
        cout<<"empty"<<endl;
    }

    return 0;
}


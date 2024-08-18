#include<iostream>
#include<string>
using namespace std;
class human{
    string name;
    int age;
public:
    human(string iname,int iage){
        name=iname;
        age=iage;
    }
    void tellme(){
        cout<<name<<endl<<age;
    }
    friend class human2;
};

int main(){
    human ani("aniket",20);
}


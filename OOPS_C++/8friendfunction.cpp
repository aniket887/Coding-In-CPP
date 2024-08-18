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
    friend void display(human man);
};
void display(human man){
    cout<<man.name<<endl<<man.age;
}
int main(){
    human ani("aniket",20);
    display(ani);
}

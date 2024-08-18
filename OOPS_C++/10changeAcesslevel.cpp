#include<iostream>
#include<string>
using namespace std;
class person{
protected:
    string name;
public:
    void setname(string iname){
        name=iname;
    }
};
class student:private person {
public:
    person::name;
    person::setname;
    void display(){
        cout<<name<<endl;
    }
};
int main(){
    student ani;
    ani.setname("aniket");
    ani.display();
}



#include<iostream>
using namespace std;
class student{
    string name;
    public:
    int age;
    bool gender;
    student(){                           //default constructor
    cout<<"default constructor"<<endl;
    }
    student(string s,int a,int g){  //parameterised constructor
        cout<<"parameterised constructor"<<endl;
        name=s;
        age=a;
        gender=g;
    }
    student(student &a){
        cout<<"copy constructor"<<endl;    //copy constructor
        name=a.name;
        age=a.age;
        gender=a.gender;
    }
    bool operator==(student &a){
        if(name==a.name&&age==a.age&&gender==a.gender){
            return true;
        }
        return false;
    }
};
int main(){
    student a("aniket",19,1);
    student b;
    student c=a;
    if(b==a){
        cout<<"same"<<endl;
    }
    else{
        cout<<"not same"<<endl;
    }
    return 0;
}

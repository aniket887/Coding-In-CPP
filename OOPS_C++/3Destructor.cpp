#include<iostream>
using namespace std;
class student{
    string name;
    public:
    int age;
    float cgpa;
    student(){                           //default constructor
    cout<<"default constructor"<<endl;
    }
    student(string s,int a,float g){  //parameterised constructor
        cout<<"parameterised constructor"<<endl;
        name=s;
        age=a;
        cgpa=g;
    }
    student(student &a){
        cout<<"copy constructor"<<endl;   //copy constructor
        name=a.name;
        age=a.age;
        cgpa=a.cgpa;
    }
    ~student(){
        cout<<"destructor called"<<endl;
    }
    void printinfo(){
        cout<<"name :"<<name<<endl;
        cout<<"age :"<<age<<endl;
        cout<<"gender :"<<cgpa<<endl;
    }
};
int main(){
    student a("aniket",19,1);
    student b;
    student c=a;
    cout<<"============";
    a.printinfo();
    cout<<"============";
    b.printinfo();
    cout<<"============";
    c.printinfo();
    return 0;
}

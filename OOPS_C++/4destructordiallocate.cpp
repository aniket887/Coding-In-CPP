#include<iostream>
using namespace std;
class human{
private:
    string *name;
    int *age;
public:
    human(string iname,int iage){
        name=new string;
        age=new int;
        *name=iname;
        *age=iage;
    }
    void display()
    {
        cout<<"hi i am "<<*name<<" and i am "<<*age<<" years old"<<endl;
    }
    ~human(){
        delete name;
        delete age;
        cout<<"memory released";
    }
};

int main(){
    human *anil=new human("anil",24);
    anil->display();
    //delete anil;
    return 0;
}



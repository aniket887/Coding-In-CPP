#include<iostream>
using namespace std;
class human{
public:
    string name="nonea";
    void intro();
};
//string human::name="noname";
void human::intro(){
    cout<<"hi "<<human::name<<endl;
}
int main(){
    human anil;
    //anil.name="anil";
    anil.intro();
}


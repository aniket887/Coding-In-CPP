#include<iostream>
using namespace std;
class human{
public:
    string name;
    void intro(){
        cout<<"hi "<<name<<endl;
    }
};
int main(){
    human anil;
    human *bunty= new human();
    anil.name="anil";
    anil.intro();
    bunty->name="bunty";
    bunty->intro();
}

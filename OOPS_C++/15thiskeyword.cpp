#include<iostream>
#include<string>
using namespace std;
class base{
private:
    int age;
public:
    void sa(int age){
        this->age=age;
    }
    void sha(){
    cout<<this->age<<endl;
    }
};
int main(){
    base ani;
    ani.sa(20);
    ani.sha();
}




#include<iostream>
using namespace std;
template<class mytype>
class myclass{
    mytype p1;
    mytype p2;
public:
    myclass(mytype x,mytype y){
        p1=x;
        p2=y;
    }
    void display(){
        cout<<"p1= "<<p1<<endl;
        cout<<"p2= "<<p2<<endl;
    }
};
int main()
{
    myclass<int>a1(23,3);
    myclass<string>a2("aniket","anroop");
    a1.display();
    a2.display();
}

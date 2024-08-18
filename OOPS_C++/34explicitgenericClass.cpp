#include<iostream>
using namespace std;
template<class t>class myclass{
    t p;
public:
    myclass(t x){
        cout<<"from generic class constructor"<<endl;
        p=x;
    }
    void display(){
        cout<<"p= "<<p<<endl;
    }
};
template<>class myclass<int>{
    int p;
public:
    myclass(int x){
        p=x;
        cout<<"from specific integer version class constructor"<<endl;
    }
    void display(){
        cout<<"p= "<<p<<endl;
    }
};
int main()
{
    myclass<string>a("aniket");
    myclass<int>b(33);
    a.display();
    b.display();
}




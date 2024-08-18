#include<iostream>
using namespace std;
template<class t1,class t2>class myclass{
    t1 p1;
    t2 p2;
    int counter;
public:
    myclass(t1 x,t2 y){
        p1=x;
        p2=y;
        counter=100;
    }
    void display(){
        cout<<"p1= "<<p1<<endl;
        cout<<"p2= "<<p2<<endl;
        cout<<"counter= "<<counter<<endl;
    }
};
int main()
{
    myclass<int,string>a1(23,"aniket");
    myclass<string,float>a2("aniket",34.2);
    a1.display();
    a2.display();
}


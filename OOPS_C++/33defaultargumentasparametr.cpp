#include<iostream>
using namespace std;
template<class t1=string,class t2=int>class myclass{
    t1 p1;
    t2 p2;
    int counter;
public:
    myclass(t1 x,t2 y){
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
    myclass<>a1("aniket",34.2);
    myclass<int,string>a2(3,"anikedawdat");
    myclass<float>a3(34.2,4.7);
    a1.display();
    a2.display();
    a3.display();
}



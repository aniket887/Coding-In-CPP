#include<iostream>
#include<string>
using namespace std;
class father{
protected:
    int height;
public:
    father(){
        cout<<"constructer of father"<<endl;
    }
};
class mother{
protected:
    string skincolor;
public:
    mother(){
        cout<<"constructer of mother "<<endl;
    }
};
class child:public father,public mother{
public:
    child(int x,string color):father(),mother(){
        cout<<"child constructor"<<endl;
        height=x;
        skincolor=color;
    }
    void display(){
        cout<<height<<" is height "<<skincolor<<" is skin color"<<endl;
    }
};
int main(){
    child ani(24,"blue");
    ani.display();
}





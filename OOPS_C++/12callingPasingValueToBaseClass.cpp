#include<iostream>
#include<string>
using namespace std;
class father{
protected:
    int height;
public:
    father(int h){
        cout<<"constructer of father"<<endl;
        height=h;
    }
};
class child:public father{
public:
    child(int x):father(x){
        cout<<"child constructor"<<endl;
    }
    void display(){
        cout<<height<<" is height"<<endl;
    }
};
int main(){
    child ani(24);
    ani.display();
}



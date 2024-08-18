#include<iostream>
using namespace std;
class human{
public:
    static int humco;
    human(){
        humco++;
    }
    void humantotal(){
        cout<<"there are "<<humco<<" people are in prgrm"<<endl;
    }
};
int human::humco=0;
int main(){
    cout<<human::humco<<endl;
    human anil;
    human anilia;
    human aniket;
    human anaar;
    anil.humantotal();
    cout<<human::humco<<endl;
}




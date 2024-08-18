#include<iostream>
#include<exception>
using namespace std;
class overspeed:public exception{
    int speed;
public:
    const char *what(){
        return "check ur car speed \n u are in car not in aeroplane";
    }
    void getspeed(){
        cout<<"speed is "<<speed<<endl;
    }
    void setspeed(int speed){
        this->speed=speed;
    }
};
class car{
    int speed;
public:
    car(){
        speed=0;
        cout<<"speed is "<<speed<<endl;
    }
    void accelerate(){
        for(;;){
            speed+=10;
            cout<<"speed is "<<speed<<endl;
            if(speed>250){
                overspeed s;
                s.setspeed(speed);
                throw s;
            }
        }
    }
};
int main(){
    car aniketcar;
    try{
        aniketcar.accelerate();
    }catch(overspeed a){
        cout<<a.what()<<endl;
        a.getspeed();
    }
    return 0;
}


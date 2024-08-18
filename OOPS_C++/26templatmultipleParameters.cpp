#include<iostream>
using namespace std;

template<typename t>void display(t ,t );

template<class t>t maxi(t x,t y);
int main()
{
    display(2,5);
    display(2.4,5.6);
    display('a','f');
    display("aniket","dwfa");
    cout<<maxi(20,30)<<endl;
    cout<<maxi(20.65,20.45)<<endl;
}
template<typename t>void display(t x,t y){
    cout<<"x= "<<x<<"and y= "<<y<<endl;
}
template<class t>t maxi(t x,t y)
{
    return (x>=y)?x:y;
}

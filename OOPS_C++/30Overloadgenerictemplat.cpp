#include<iostream>
using namespace std;
template<typename t>void whatyougot(t x);
template<typename t1,typename t2>void whatyougot(t1 x,t2 y);
int main()
{
    whatyougot(23.456);
    whatyougot(22,24.5);
    whatyougot("aniket",'e');
}
template<typename t>void whatyougot(t x){
    cout<<"generic function with one parameter"<<endl;
    cout<<"i got x = "<<x<<endl;
}
template<typename t1,typename t2>void whatyougot(t1 x,t2 y){
    cout<<"generic function with two parameter"<<endl;
    cout<<"i got x = "<<x<<endl;
    cout<<"i got y = "<<y<<endl;
}


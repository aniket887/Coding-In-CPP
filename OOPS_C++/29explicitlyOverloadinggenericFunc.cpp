#include<iostream>
using namespace std;
template<typename t>void whatyougot(t x);
//void whatyougot(int x);
template<>void whatyougot<int>(int x);
int main()
{
    whatyougot(23.456);
    whatyougot(22);
    whatyougot("aniket");
}
template<typename t>void whatyougot(t x){
    cout<<"inside whatyougot generic function"<<endl;
    cout<<"i got x = "<<x<<endl;
}/*
void whatyougot(int x){
    cout<<"inside whatyougot normal function"<<endl;
    cout<<"i got x = "<<x<<endl;
}*/
template<>void whatyougot<int>(int x){
    cout<<"inside whatyougot normal function"<<endl;
    cout<<"i got x = "<<x<<endl;
}

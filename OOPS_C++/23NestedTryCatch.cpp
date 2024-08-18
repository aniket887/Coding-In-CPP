#include<iostream>
#include<exception>
using namespace std;
int main(){
    try{
        try{
            throw"a character exception";
        }catch(const char *c){
            cout<<"character type in inner block --> "<<c<<endl;
            cout<<"rethrowing from inner block  "<<endl;
            //throw;
            throw runtime_error("wdadwda");
        }
    }catch(const char *c){
    cout<<"character type in outer block --> "<<c<<endl;
    }catch(...){
    cout<<"unexpected exception in outer block --> "<<endl;
    }
    return 0;
}

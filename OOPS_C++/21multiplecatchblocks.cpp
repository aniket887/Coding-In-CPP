#include<iostream>
#include<exception>
using namespace std;
int main(){
    try{
        //throw 20;
        //throw "exception occured";
        //throw runtime_error("rumtime_error");
        throw 'a';
    }
    catch(const char *err){
        cout<<err<<endl;
    }catch(int error){
        cout<<error<<endl;
    }catch(runtime_error e){
        cout<<e.what()<<endl;
    }
    catch(...){
        cout<<"some exception occured"<<endl;
    }
    return 0;
}


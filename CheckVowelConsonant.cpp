#include<iostream>
using namespace std;
int main()
{
    char c;
    int lv,uv;
    cout<<"enter an alphabet:";
    cin>>c;
    lv=(c=='a'|| c=='e' || c=='i' || c=='o' || c=='u');
    uv=(c=='A'|| c=='E' || c=='I' || c=='O' || c=='U');
    if(lv||uv)
    {
        cout<<c<<":is a vowel";
    }
    else
    {
        cout<<c<<":is a consonant";
    }
}



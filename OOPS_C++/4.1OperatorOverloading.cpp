#include"bits/stdc++.h"
using namespace std;
class Complex
{
private:
    int real,imag;
public:
    Complex(int r=0,int i=0)
    {
        real=r;
        imag=i;
    }
    Complex operator *(Complex const &obj)
    {
        Complex res;
        res.real=real*obj.real;
        res.imag=imag*obj.imag;
        return res;
    }
    void disp()
    {
        cout<<real<<"+i"<<imag<<endl;
    }
};
int32_t main()
{
    Complex c1(12,7),c2(6,7);
    Complex c3=c1*c2;
    c3.disp();
}

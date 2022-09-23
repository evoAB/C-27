#include <iostream>

using namespace std;

class Complex
{
private:
    int real, imag;
public:
    void setData(int a, int b)
    {
        real=a;
        imag=b;
    }
    void showData()
    {
        cout<<"Complex : "<<real<<"+"<<imag<<"j"<<endl;
    }
    friend Complex operator + (Complex, Complex);
};

Complex operator + (Complex X, Complex Y)
{
    Complex temp;
    temp.real=X.real+Y.real;
    temp.imag=X.imag+Y.imag;
    return temp;
}
int main()
{
    Complex c1,c2,c3;
    c1.setData(3,4);
    c2.setData(4,5);
    c3=c1+c2;
    c3.showData();
    return 0;
}

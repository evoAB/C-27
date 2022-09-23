#include <iostream>

using namespace std;

class Complex
{
private:
    int real,imag;
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
    Complex operator +(Complex);
    Complex operator -(Complex);
    Complex operator *(Complex);
    bool operator ==(Complex);
};
Complex Complex :: operator +(Complex C)
{
    Complex temp;
    temp.real=real+C.real;
    temp.imag=imag+C.imag;
    return temp;
}
Complex Complex :: operator -(Complex C)
{
    Complex temp;
    temp.real=real-C.real;
    temp.imag=imag-C.imag;
    return temp;
}
Complex Complex :: operator *(Complex C)
{
    Complex temp;
    temp.real=real*C.real;
    temp.imag=imag*C.imag;
    return temp;
}
bool Complex :: operator ==(Complex c)
{
    if (real==c.real && imag==c.imag)
        return true;
    return false;
}
int main()
{
    Complex c1,c2,c3,c4,c5;
    c1.setData(3,4);
    c2.setData(4,5);
    c3=c1+c2;
    c3.showData();
    c4=c2-c1;
    c4.showData();
    c5=c1*c2;
    c5.showData();
    if (c1==c2)
        cout<<"Both are same";
    else
        cout<<"Both are different";
}

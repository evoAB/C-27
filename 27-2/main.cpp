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
    Complex operator ++ ();
    Complex operator -- ();
};
Complex Complex :: operator ++ ()
{
    Complex temp;
    temp.real=++real;
    temp.imag=++imag;
    return temp;
}
Complex Complex :: operator -- ()
{
    Complex temp;
    temp.real=--real;
    temp.imag=--imag;
    return temp;
}
int main()
{
    Complex c1,c2,c3;
    c1.setData(3,4);
    c2=++c1;
    c2.showData();
    c3=--c1;
    c3.showData();
    return 0;
}

#include <iostream>

using namespace std;

class fraction
{
private:
    long numerator;
    long denominator;
public:
    fraction(long n=0, long d=0)
    {
        numerator = n;
        denominator = d;
    }
    fraction operator ++ ()
    {

        fraction temp;
        temp.numerator=++numerator;
        temp.denominator=++denominator;
        return temp;
    }
    fraction operator ++ (int)
    {
        fraction temp;
        temp.numerator=numerator++;
        temp.denominator=denominator++;
        return temp;
    }
    friend void operator >> (istream &in, fraction &f)
    {
        cout<<"Numerator : ";
        in>>f.numerator;
        cout<<"Denominator : ";
        in>>f.denominator;
    }
    friend void operator<<(ostream &out, fraction &f)
    {
        out<<f.numerator<<"/"<<f.denominator<<endl;
    }

};

int main()
{
    fraction f1,f2;
    cout<<"f1 : ";
    cout<<f1;
    cout<<"f2 : ";
    cout<<f2;
    cout<<"Enter 1st Fraction Value"<<endl;
    cin>>f1;
    cout<<"f1++ : ";
    f1++;
    cout<<f1;
    cout<<"++f1 : ";
    ++f1;
    cout<<f1;
    cout<<"Enter 2nd Fraction Value"<<endl;
    cin>>f2;
    cout<<"f2 : ++f1"<<endl;
    cout<<"f1 : ";
    ++f1;
    cout<<f1;
    cout<<"f2 : ";
    f2=f1;
    cout<<f2;
    cout<<endl<<"f2=f1++\n";
    f2=f1++;
    cout<<"f1 : ";
    cout<<f1;
    cout<<"f2 : ";
    cout<<f2;
    return 0;
}

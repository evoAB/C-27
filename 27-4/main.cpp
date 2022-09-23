#include <iostream>

using namespace std;

class Time
{
private:
    int h,m,t;
public:
    bool operator == (Time);
    friend void operator >> (istream&, Time&);
    friend void operator << (ostream&, Time&);
};
bool Time :: operator == (Time T)
{
    if(h==T.h && m==T.m && t==T.t)
        return true;
    return false;
}
void operator >> (istream &is, Time &T)
{
    cout<<"Enter Hours : ";
    is>>T.h;
    cout<<"Enter minutes : ";
    is>>T.m;
    cout<<"Enter seconds : ";
    is>>T.t;
}
void operator <<(ostream &os, Time &T)
{
    os<<"Hours : "<<T.h<<endl;
    os<<"Minutes : "<<T.m<<endl;
    os<<"Seconds : "<<T.t<<endl;
}

int main()
{
    Time t1, t2;
    cout<<"Enter first Time"<<endl;
    cout<<"------------------"<<endl;
    cin>>t1;
    cout<<endl<<"First Time"<<endl;
    cout<<t1;
    cout<<endl<<"Enter second Time"<<endl;
    cout<<"------------------"<<endl;
    cin>>t2;
    cout<<endl<<"Second Time"<<endl;
    cout<<t2;
    if(t1==t2)
        cout<<endl<<"Times are same";
    else
        cout<<endl<<"Times are different";
    return 0;
}

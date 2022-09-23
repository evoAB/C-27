#include <iostream>

using namespace std;

class MyString
{
private:
    char str[100];
public:
    void getString()
    {
        cout<<"Enter string : ";
        cin>>str;
    }
    void showString()
    {
        cout<<"Entered string : "<<str<<endl;
    }
    void operator ! ()
    {
        for(int i=0;str[i];i++)
            if(str[i]>=65 && str[i]<=90)
                str[i]+=32;
            else
                if(str[i]>=97 && str[i]<=122)
                    str[i]-=32;
    }
};
int main()
{
    MyString s;
    s.getString();
    s.showString();
    !s;
    s.showString();
    return 0;
}

#include <iostream>
#include <string.h>

using namespace std;

class CString
{
private :
    char s[20];
public:
    void getData()
    {
        cout<<"Enter a string ";
        cin>>s;
    }
    void showData()
    {
        cout<<s<<endl;
    }
    CString operator + (CString);
    bool operator == (CString);

};

CString CString :: operator + (CString c)
{
    CString temp;
    strcpy(temp.s,s);
    strcat(temp.s,c.s);
    return temp;
}
bool CString :: operator == (CString c)
{
    if(strcmp(s,c.s)==0)
        return true;
    return false;
}
int main()
{
    CString s1,s2,s3;
    s1.getData();
    s2.getData();
    s3=s1+s2;
    s3.showData();
    if(s1==s2)
        cout<<"Both Strings are same";
    else
        cout<<"Both Strings are different";
    return 0;
}

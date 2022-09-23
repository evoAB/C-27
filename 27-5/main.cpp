#include <iostream>

using namespace std;

class Numbers
{
private:
    int x,y,z;
public:
    Numbers operator - ();
    void setData(int a, int b, int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void showData()
    {
        cout<<"Three Numbers : "<<endl;
        cout<<x<<endl;
        cout<<y<<endl;
        cout<<z<<endl;
    }
};
Numbers Numbers:: operator - ()
{
    Numbers temp;
    temp.x=-x;
    temp.y=-y;
    temp.z=-z;
    return temp;
}

int main()
{
    Numbers n1;
    n1.setData(1,2,3);
    n1=-n1;
    n1.showData();
    return 0;
}

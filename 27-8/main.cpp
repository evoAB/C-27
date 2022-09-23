#include <iostream>

using namespace std;

class Matrix
{
private:
    int a[3][3];
public:
    void getData()
    {
        int i,j;
        cout<<"Enter matrix element (3 X 3) : "<<endl;
        for(i=0;i<3;i++)
            for(j=0;j<3;j++)
                cin>>a[i][j];
    }
    void showData()
    {
        int i,j;
        cout<<"Matrix is : "<<endl;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                cout<<a[i][j]<<"\t";
            cout<<endl;
        }
    }
    Matrix operator - ()
    {
        int i,j;
        Matrix temp;
        for(i=0;i<3;i++)
            for(j=0;j<3;j++)
                temp.a[i][j]=-a[i][j];
        return temp;
    }
};

int main()
{
    Matrix m;
    m.getData();
    m.showData();
    m=-m;
    m.showData();
    return 0;
}

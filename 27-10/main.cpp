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
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                cout<<a[i][j]<<"\t";
            cout<<endl;
        }
    }
    Matrix operator + (Matrix m)
    {
        Matrix temp;
        int i,j;
        for(i=0;i<3;i++)
            for(j=0;j<3;j++)
                temp.a[i][j]=a[i][j]+m.a[i][j];
        return temp;
    }
};

int main()
{
    Matrix m1,m2,m3;
    m1.getData();
    m2.getData();
    cout<<"First Matrix : "<<endl;
    m1.showData();
    cout<<"Second Matrix : "<<endl;
    m2.showData();
    cout<<"Addition of Matrix : "<<endl;
    m3=m1+m2;
    m3.showData();
    return 0;
}

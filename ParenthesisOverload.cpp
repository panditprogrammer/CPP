//overloading of parenthesis operator
#include <iostream>
using namespace std;

class Matrix
{
private:
    int a[3][3];
public:
    //defining a function for overlaoding of parenthesis
    int& operator()(int i,int j)  //returning address
    {
        return(a[i][j]);

    }

    void printMatrix()
    {
        int i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
    }
};

int main()
{
    system("cls");
    Matrix m;

    //inserting value at matrix index
    m(0,0) = 12;
    m(0,1) = 19;
    m(0,2) = 9;

    m(1,0) = 16;
    m(1,1) = 11;
    m(1,2) = 4;

    m(2,0) = 14;
    m(2,1) = 17;
    m(2,2) = 13;

    m.printMatrix();
    system("pause");

}

//type conversion premitive to class
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class Complex
{
    private:
    int a,b;
    public:
    public:
    void setData(int x,int y)
    {
        a = x; b = y;
    }
    void showData()
    {
        cout<<" a = "<<a<<" b = "<<b<<endl;
    }

    Complex(){}
    
    Complex(int i)
    {
        a = i;
        b = 0;
    }
};

int main(int argc, char const *argv[])
{
    system("cls");
    Complex c1;
    int X = 5;
    c1 = X;  //type conversion int to complex using constructor
    c1.showData();
    system("pause");
    return 0;
}

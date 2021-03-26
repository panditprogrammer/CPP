//this pointer 
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class Box
{
    private:
    int l,b,h;
    public:
    void setDimenstion(int l,int b,int h)
    {
        this->l = l; this->b = b; this->h = h;  //this pointer is point to caller object 
    }
    void showDimension()
    {
        cout<<" length ="<<l<<" width ="<<b<<" height ="<<h<<endl;
    }
};

int main()
{
    system("cls");
    Box b1;
    b1.setDimenstion(10,5,8);
    b1.showDimension();

    system("pause");
    return 0;
}
//operator overloading in cpp
// - operator overloading as binary operator
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class complex
{
    private:
    int a,b;
    public:
    void setData(int x,int y)
    {
        a = x; b= y;
    }
    void showData()
    {
        cout<<"a = "<<a<<" b = "<<b<<endl;

    }
    complex operator-()
    {
        complex t ;
        t.a = - a;
        t.b = - b;
        return t;
    }
};
int main(int argc, char const *argv[])
{
    system("cls");
    complex c1,c2;
    c1.setData(3,8);
    // c2 = c1.operator-(); 
    //calling another ways 
    c2 = - c1;    //after overloading - operator
    c2.showData();
    system("pause");
    return 0;
}

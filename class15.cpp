// overloading of unary operator as a friend function
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class Complex
{
    private:
    int a,b;
    public:
    void setData(int x,int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout<<"a = "<<a<<" b = "<<b<<endl;
    }
    friend Complex operator-(Complex);  //overloading of unary - operator
};
//defining friend function outside of the class
Complex operator-(Complex c)
    {
        Complex t;
        t.a = -c.a;
        t.b = -c.b;
        return t;
    }   

int main(int argc, char const *argv[])
{
    system("cls");
    Complex c1,c2;
    c1.setData(8,2);
    // c2 = operator-(c1); //we can use like this
    c2 = -c1;  //this is after overlaoding 
    c2.showData();
    
    system("pause");
    return 0;
}

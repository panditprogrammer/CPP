//operator overloading :- when an operator is overloaded with multiple jobs 
// this is known as compile time polymorphism
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
        a = x; b = y;
    }
    void showData()
    {
        cout<<"a = "<<a<<" b = "<<b<<endl;
    }

    //creating operator overloading
    complex operator +(complex c)
    {
        complex t ;
        t.a  = a+c.a;
        t.b = b+c.b;
        return t;
    }
};

int main(int argc, char const *argv[])
{
    system("cls");
    complex c1,c2,c3;
    c1.setData(3,7);
    c2.setData(10,13);
    // c3 = c1.operator+(c2); //this is valid syntax
    c3 = c1 + c2; //this is shortcut of obove
    c3.showData();

    system("pause");
    return 0;
}

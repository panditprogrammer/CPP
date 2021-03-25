//overloading of operator as a friend function
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
         cout<<" a = "<<a<<" b = "<<b<<endl;
    }

    //friend function declared 
    friend complex operator+(complex A,complex B);
};

complex operator+(complex A,complex B)
{
    complex c;
    c.a = A.a+ B.a;
    c.b = A.b+ B.b;
   return c;
}

int main(int argc, char const *argv[])
{
    system("cls");
    complex c1,c2,c3;
    c1.setData(20,30);
    c2.setData(21,49);
    // c3 = operator+(c1,c2); //we can write like this
    c3 = c1+c2;  //after overloading + operator
    c3.showData();
    system("pause");
    return 0;
}

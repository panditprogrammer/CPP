//friend function 
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class complex
{
    private:
    int a ,b;
    public:
    void setData(int x,int y)
    {
        a = x; b = y;
    }
    void showData()
    {
        cout<<" a = "<<a<<" b = "<<b<<endl;
    }
    friend void fun1(complex); //this is friend function only declaration
};
//definition of friend function
void fun1(complex c)
{
    cout<<" sum is "<<c.a+c.b<<endl;
}

int main(int argc, char const *argv[])
{
    system("cls");
    complex c1;
    c1.setData(12,83);
    fun1(c1);
    system("pause");
    return 0;
}


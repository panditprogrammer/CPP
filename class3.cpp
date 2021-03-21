//program to define st
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
class complex
{
    private:
    int a,b;
    public:

    complex addData(complex c)
    {
        complex result;
        result.a = a+c.a;
        result.b = b+c.b;
        return result;
    }
    void setData(int x,int y)
    {
        a = x;
        b = y;
    }
    void showdata()
    {
        cout<<" a = "<<a<<" b = "<<b<<endl;
    }
};

int main(int argc, char const *argv[])
{
    system("cls");

        complex c1,c2,c3;
        c1.setData(4,5); //taking data
        c2.setData(3,8);//taking data
        c3 = c1.addData(c2); 
        c3.showdata();

    system("pause");
    return 0;
}

//program to define class like structure
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
class complex //class in cpp with access spacifiers like public ,private
{
    //creating class variable private
    private:
    int a,b;
    //creating class functions public
    public:
    void input(int x,int y)
    {
        a = x; b = y;
    }
    void show()
    {
        cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    }
};

int main(int argc, char const *argv[])
{
    system("cls");
    complex c1; //creating object of class emp like structure
    c1.input(4,5);
    c1.show();
    system("pause");
    return 0;
}

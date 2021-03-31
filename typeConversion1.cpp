//type conversion class to primitive type
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class Complex
{
    private:
    int a,b;
    public:
    void set(int x,int y)
    {
        a = x; b = y;
    }
    void show()
    {
        cout<<"a = "<<a<<" b = "<<b<<endl;
    }
    Complex(){}
    //for type conversion
    operator int()   //int return type 
    {
        return (a);
    }
};


int main(int argc, char const *argv[])
{
    system("cls");
    Complex c1;
    c1.set(8,10);
    c1.show();
    int X = c1;  // type conversion complex to int 
    cout<<" value of X is "<<X<<endl;
    system("pause");
    return 0;
}

//constructor overloading 
//constructor parameterized
//default constructor
#include <iostream>
#include <stdlib.h>
using namespace std;
//creating class
class complex
{
    private:
    int a,b;
    public:
    void setValue(int x,int y)
    {
        a = x; b = y;
    }
    void getValue()
    {
        cout<<" a = "<<a<<"b = "<<b<<endl;
    }
    //creating constructor
    complex()
    {
        cout<<"this is constructor without no argument this is called default constuctor\n";
    }
    complex(int c)
    {
        cout<<"this is constructor with one argument\n";
        cout<<" a = "<<c<<endl;
    }
    complex(int a,int b)
    {
        cout<<" this is constructor with two arguments\n";
        cout<<"a = "<<a<<" b = "<<b<<endl;
    }
};
int main()
{
    system("cls");
    complex c1; //constructor is implicitly invoked when object is created
    complex c(5);
    complex c2(10,20);
    system("pause");
    return 0;
}
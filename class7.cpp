//constructor and copy constructor
#include <stdlib.h>
#include <iostream>
using namespace std;

class complex
{
    private:
    int a,b;
    public:
    complex(int a,int b)
    {
        a = a; b = b;
        cout<<"a = "<<a<<" b = "<<b<<endl;
    }
    complex(int a) //parameterized constructor
    {
        cout<<"a = "<<a<<endl; 
    }
     complex() //default constructor
    { }

    complex(complex &c)   //copy constructor
    {
        a = c.a;
        b = c.b;
        cout<<"a = "<<a<<"b = "<<b<<endl;
    }
 
    void getValue()
    {
        cout<<"a = "<<a<<" b = "<<b<<endl;
    }
   
};

int main(int argc, char const *argv[])
{
    system("cls");
    complex c1(10,20),c2,c3(10);
    complex c4(c1); //calling copy constructor
    
    system("pause");
    return 0;
}

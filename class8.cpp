//creating distructor 
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
    complex()
    {}
    //this is distructor
    ~ complex()
    { cout<<"This is distructor\n";}
   
};

int main(int argc, char const *argv[])
{
    system("cls");
    complex c1;
    
    system("pause");
    return 0;
}

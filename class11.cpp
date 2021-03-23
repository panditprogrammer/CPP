//overloding of unary operator ++ or --
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class Integer
{
    private:
    int a;
    public:
    void setData(int x)
    {
        a = x;
    }
    void showdata()
    {
        cout<<" a = "<<a<<endl;
    }
    //overloading operator
    Integer operator++()  //preincreament overloading
    {
        Integer I;
        I.a = ++a;
        return I;
    }
    Integer operator++(int)  //'int' this is for compiler to understand difference between post increament and preincreament
    {
        Integer I;
        I.a = a++;
        return I;
    }
};

int main(int argc, char const *argv[])
{
    system("cls");
    Integer obj1,obj2;
    obj1.setData(18);
    
    obj2 = obj1++;  //post increament 
    obj2.showdata();

    obj2 = ++obj1;  //obj2 = obj1.oeprator++(); preincreament 
    obj2.showdata();

    system("pause");
    return 0;
}

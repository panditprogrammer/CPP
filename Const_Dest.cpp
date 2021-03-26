//constructor and destructor in inheritance
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class A
{
    private:
    int a;
    public:
    //this is constructor
    A(int x)
    {
        a = x;
        cout<<"Class A"<<endl;
    }
    //default constructor
    A()
    {

    }
    //Destructor
    ~A()
    {
        cout<<"Destructor of class A"<<endl;
    }
};

// class A is inherited by class B

class B:public A
{
    private:
    int b;
    //this is constructor inheritance
    public:
    B(int x,int y):A(x)     //first class B constructor calling class A constructor
    {
        b = y;
        cout<<"Class B"<<endl;
    }

    //default constructor
    B()
    {

    }
     //Destructor :  before end of execution of obj
     ~B()
     {
        cout<<"Destructor of class B"<<endl;
     }

};
int main(int argc, char const *argv[])
{
    system("cls");
    B b1(10,20);  //constructor implicitly invoked when object is created

    system("pause");
    return 0;
}

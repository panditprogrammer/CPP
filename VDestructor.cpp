//Virtual Destructor 
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class A
{
    private:
    int a;
    public:
    void fun1()
    {
        cout<<"Hello from Class A";
    }
    //destructor 
    virtual ~A()   //late binding 
    {

    }
};

class B:public A
{
    private:
    int b;
    void fun2()
    {
        cout<<"Hello from class F";
    }
    //destructor
    ~B()
    {

    }

};

void function()
{
    A *p = new B;  //
    p->fun1();   //calling function
    // p->fun2();   //error 
    delete p;

}

int main(int argc, char const *argv[])
{
    function();
    return 0;
}

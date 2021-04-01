//namespace  group of header files 
//namespace : declaration of variables ,functions,classes and more
#include <iostream>
using namespace std;

//create a namespace 
namespace myspace
{
    int a;
    void fun();

    class A
    {
        public:
        void function1();
    };

}

//defining function of namespace 
void myspace::fun()
{
    cout<<"This is from fun."<<endl;
}

//defining function of namespace of class
void myspace::A::function1()
{
    cout<<" This is from class A"<<endl;
}

using namespace myspace;  //using our namespace

int main(int argc, char const *argv[])
{
    //myspace::a=5;   //accessing variables after declaration
    a = 10;  //this is from myspace
    cout<<"a is "<<a<<endl;

    A a1;
    a1.function1();
    fun();


    return 0;
}

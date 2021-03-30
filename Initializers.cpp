//Initializers : providing data in constructor
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class Student
{
    private:
    int roll;
    const int sequence;  //constant variable

    //initializing reference variable
    int &s;
    public:
    Student(int &n):sequence(1),s(n)  //this is initializer 
    {
        //some code
        cout<<"Value is "<<s<<" initialized"<<endl;
    }
};
int main(int argc, char const *argv[])
{
    int x = 20;
    Student s1(x);

    return 0;
}

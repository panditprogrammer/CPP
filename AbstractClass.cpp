//pure virtual function is called Abstract class
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

//super class
class person
{
    private:
    int age;
    public:
    virtual void setAge(int a)
    {
        age = a;
    }
    virtual void showAge()
    {cout<<"Age is "<<age<<endl;}
    //do nothing function with virtual keyword containing class called Abstract class
    //we cannot create object of abstract class
    virtual void fun1() =0;    
};

//inherited class
class student:public person
{
    private:
    char name[20];
    public:
    void fun1()  //function is overriding 
    {
        cout<<"This is studend . ";
        
    }
};

int main()
{
    system("cls");
    student s1;
    s1.setAge(20);
    s1.showAge();
    s1.fun1();
    system("pause");
    return 0;
}
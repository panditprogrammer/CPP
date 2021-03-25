//friend function with two classes
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
class B;
class A 
{
    private:
    int a;
    public:
    void setData(int x)
    {
        a = x;
    }
    friend void fun1(A,B);
    
};
//class B
class B
{
    private:
    int b;
    public:
    void setData(int y)
    {
        b = y;
    }
    friend void fun1( A,B); //friend function 

};

//definition of friend function that is declared in class A and class B
void fun1(A a,B b)
{
    cout<<" sum is "<<a.a+b.b<<endl;
}
int main(int argc, char const *argv[])
{
    system("cls");
    A a1;
    B b1;
    a1.setData(20);
    b1.setData(50);
    //calling friend function
    fun1(a1,b1);
    system("pause");
    return 0;
}





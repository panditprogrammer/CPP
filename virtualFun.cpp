//"virtual" function in case of function overriding aftr inheritance
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class Car 
{
    private:
    int price;
    public:
   virtual void changeGear()  //virtual for late binding
    {
        cout<<"ChangeGear in car"<<endl;
    }
};
class sportsCar:public Car
{
    private:
    int price;
    public:
    void changeGear()
    {
        cout<<"Gear changed..."<<endl;
    }
};
int main()
{
    system("cls");

        Car c1,*cptr; //creating obj and pointer
        sportsCar s1; 
        cptr = &s1; //assining address of object s1 into pointer cptr
        s1.changeGear();
        cptr->changeGear();   

    system("pause");
    return 0;
}

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

class Car 
{
    private:
    int num;
    public:
    void changeGear()
    {
        cout<<"Changing Gear in car"<<endl;
    }
    void checkCar()
    {
        cout<<"This is Car"<<endl;;
    }
};

class SportsCar:public Car   //inherited class Car
{
    private:
    int num;
    public:
    void changeGear()   //method overriding  same function name and arguments as parent class
    {                   //modified function of class Car called method overriding
        cout<<"Changing Gear in Sports car..."<<endl; 
    }

    void checkCar(int s)  //method hiding same function name but different arguments as parent class
    {
        cout<<"This is Sports Car"<<endl;
        
    }
};

int main(int argc, char const *argv[])
{
    system("cls");
    SportsCar s1;
    s1.changeGear();  //this is call from class SportsCar due to early binding
    s1.checkCar(1);
    //creating object of class Car
    Car c1;
    c1.checkCar();
    c1.changeGear();
    system("pause");
    return 0;
}

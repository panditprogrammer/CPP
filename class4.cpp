//static member variable and class variable
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class Account 
{
    private:
    int balance; //this is called instance member variable
    static float rate; //static member variable or class variable
    public:
    void setBalance(int b)
    {
        balance = b;
    }
    void showBalance()
    {cout<<"balance is "<<balance<<endl;}
    static void setRate(float r) //non instance member function
    {
        rate = r;
    }
};

float Account::rate = 2.5f;

int main(int argc, char const *argv[])
{
    //creating objects of class
    Account a;
    a.setBalance(1000);
    a.setRate(2.5);
    a.showBalance();
    Account::setRate(5.0f); //static member function
    return 0;
}

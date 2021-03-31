//type conversion class to class type
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

class Product
{
    private:
    int a,b;
    public:
    void set(int x,int y)
    {
        a = x; b= y;
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
   

};

class item
{
    private:
    int x,y;
    public:
    void show()
    {
        cout<<" x = "<<x<<" y = "<<y<<endl;
    }
    item(){} //default constructor

    item (Product p)  //for assigning data int another class
    {
        x = p.getA();
        y = p.getB();
    }

};


int main(int argc, char const *argv[])
{
    system("cls");
    Product p1;
    item Item;
    p1.set(8,6);
    Item = p1;  //assigning data to another class
    Item.show();

    system("pause");
    return 0;
}

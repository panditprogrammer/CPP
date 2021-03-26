//Inheritance 
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

//this is main class called parent class
class First
{
    private:
    int a;
    protected:   //this is access specifier // not accessible with object of class First
    void setValue(int x)
    {
        a = x;
    }
    int getData()
    {
        return a;
    }

};

//this is inherited class called child class
class Second:public First  //inherite of class First   
{
    private:
    int b;

    public:
    //setting value in First class
    void setData(int a)
    {
        setValue(a);
    
    }
    //showing data after getting from class First
    void showData()
    {
        b = getData();
        cout<<"value is "<<b<<endl;
    }
};

int main(int argc, char const *argv[])
{
    int temp;
    system("cls");
    Second sobj;    //creating object
    cout<<"Enter number ";
    cin>>temp;
    sobj.setData(temp);
    sobj.showData();
    system("pause");
    return 0;
}

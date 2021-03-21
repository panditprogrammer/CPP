//program to define class like structure
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
class emp //class in cpp with access spacifiers like public ,private
{
    //creating class variable private
    private:
    int id;
    float sallary;
    char name[20];
    //creating class functions public
    public:
    void input()
    {
        cout<<"Enter id,name,sallary ";
        cin>>id>>name>>sallary;
    }
    void show()
    {
        cout<<"id = "<<id<<endl<<"name = "<<name<<endl<<"sallary = "<<sallary<<endl;
    }
};

int main(int argc, char const *argv[])
{
    system("cls");
    emp e1; //creating object of class emp like structure
    e1.input();
    e1.show();
    system("pause");
    return 0;
}

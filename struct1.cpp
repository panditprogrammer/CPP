//program to define structure and creating function indside
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
struct emp //structure in cpp with functions
{
    int id;
    float sallary;
    char name[20];

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
    emp e1;
    e1.input();
    e1.show();
    system("pause");
    return 0;
}

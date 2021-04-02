//Nested class : class inside a class
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

//main class
class Student
{
private:
    int roll;
    char name[20];

    class Address //this is called nested class
    {
    private:
        int houseN;
        char street[20];
        char city[20];
        char state[20];
        char pin[7];

    public:
        void setAddress(int hn, char *s, char *ct, char *ST, char *pn)
        {
            houseN = hn;
            strcpy(street, s);
            strcpy(city, ct);
            strcpy(state, ST);
            strcpy(pin, pn);
        }
        void showAddress()
        {
            cout<<"Address \n";
            cout<<"House N. - "<<houseN<<endl;
            cout<<"Street - "<<street<<endl;
            cout<<"City - "<<city<<endl;
            cout<<"State - "<<state<<endl;
            cout<<"Pin - "<<pin<<endl;
        }
    };

    // creating an object of class Address 
    Address Adds1;

public:
    void setRoll(int r)
    {
        roll = r;
    }
    void setName(char *n)
    {
        strcpy(name, n);
    }
    void setAdd(int H,char *S,char *C,char *st,char *p)
    {
        Adds1.setAddress(H,S,C,st,p);
    }
    void showData()
    {
        cout<<"Student Roll "<<roll<<endl;
        cout<<"Name is "<<name<<endl;
        Adds1.showAddress();
    }
};

int main(int argc, char const *argv[])
{
    system("cls");
    Student s1;
    s1.setRoll(10);
    s1.setName("Raju");
    s1.setAdd(37,"Ara bihar","Ara","bihar","802316");
    s1.showData();
    system("pause");
    return 0;
}

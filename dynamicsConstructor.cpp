//Dynamics constructor 
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class student
{
    private:
    int roll ;
    int *fp;
    public:
    void show()
    {
        cout<<"Roll no is "<<roll<<" Fees is "<<*fp<<endl;
    }

    student()    //this is called dynamics constructor that can create new memory block
    {
        fp = new int;
        *fp = 0;
        roll = 0;
        
    }

    student(int r,int f)  //this is called dynamics constructor that can create new memory block
    {
        roll = r;
        fp = new int;
        *fp = f;

    }
};

int main(int argc, char const *argv[])
{
    system("cls");
    student s1;
    student s2(1,2000);
    s1.show();
    s2.show();
    system("pause");

    return 0;
}

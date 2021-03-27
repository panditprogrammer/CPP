#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
 /*   new and delete keyword 
     "new" keyword used for creating new datatype  or object
     "delete" keyword used for deleting dynamically created variables and objects

*/
//creating new variable dynamically
int *var1 = new int; // *var1 is static pointer variable and "new" return address of dynamically created int block

float *num = new float; //creating float variable
int *arr = new int[5]; //creating array 

class complex
{
    private:
    int a;
    public:
    //some method goes here

};

class student
{
    private:
    int name;
    int roll;
    public:
    //some method goes here
};


int main(int argc, char const *argv[])
{
student *s1 = new student; //creating object
complex *c1 = new complex;  //creating objects
    cout<<"hello world";
    return 0;
}


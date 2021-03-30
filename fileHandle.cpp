//file handling in cpp file open and write content in file
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    ofstream fileout;  //create object 
    fileout.open("mydatafile.dat");  //open file with custom name
    fileout<<"Hello world";  //writing in file
    fileout.close();  //operation done file close
    system("pause");
    return 0;
}

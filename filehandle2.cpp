//file handling 
// file opening mode read, write ,append
/*
output = std::out    To write content in file
input = std::in         To read content from file
append = std::app       To append content end the end of file content
update = std::ate       To update content in file
binary = std::binary   Open as binary mode 

*/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");

    ofstream fileout;
    fileout.open("myfile.dat",ios::out | ios::app);  //open with modes

    system("pause");
    return 0;
}




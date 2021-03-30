//file handling in cpp file open and reading content from file
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    char ch;

    ifstream fileIn; //create an object
    fileIn.open("mydatafile.dat");  //open file
    // fileIn>>ch;    //reading file >> operator does'nt read " " space character
    ch = fileIn.get(); //reading all content from file with delimeter
    //loop for iterate file content
    while (!fileIn.eof())
    {
        cout<<ch;
        ch = fileIn.get();
    }
    //file closing to save
    fileIn.close();

    system("pause");
    return 0;
}


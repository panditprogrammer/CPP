//file handling seekp function
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    system("cls");
    //create an object
    ofstream file;
    file.open("demo.txt",ios::ate|ios::app);  //file open with openning modes

    cout<<"writing position is "<<file.tellp()<<endl; //return writing position

    file.seekp(2,ios_base::beg);  //shifting writing position

    cout<<"writing position is "<<file.tellp()<<endl; //returning writing position
    file.close();
    system("pause");
}

//file handling seeg
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    system("cls");
//    create an object of fstream
    fstream file;
    file.open("demo.txt");
    cout<<"current position is "<<file.tellg()<<endl; //return cursor pointer positision index
    cout<<(char)file.get()<<endl; //return the character ascii code
    file.seekg(3);
    cout<<"position is "<<file.tellg()<<endl;  //returning index
    cout<<(char)file.get()<<endl;
    cout<<"position is "<<file.tellg()<<endl;  //returning index
    //reading character to the end
    file.seekg(-3,ios_base::end);
    cout<<"position is "<<file.tellg()<<endl;  //returning index
    cout<<(char)file.get()<<endl;
    system("pause");
}

//map class : associative array
/*
size ,empty ,insert ,clear methods of map class
*/
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <map>
using namespace std;

int main()
{
    system("cls");
    //creating a map object key value pair
    map <int,string>student;
    student[1]="rohit";
    student[2] = "rahul";
    student[3] = "ruby";
    student[4] = "sonam";
    student[5] = "shahid";

    map <string,string> course{
        {"python","2 months"},
        {"C++","3 months"},
        {"java","3 months"}
    };

    //printing
    cout<<"Studen roll 3 "<<student[3]<<endl;

    //printing value using iterator
    map <int,string>::iterator p = student.begin();
    while(p != student.end())
    {
        cout<<p->first<<endl; //this is for index
        cout<<p->second<<endl; //this is for value
        p++;
    }
    //at function

    cout<<student.at(4)<<endl;;
    system("pause");
}

//list template class
//list STL
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <list>
using namespace std;

int main()
{
    system("cls");
    list <int>list1{10,20,30};

    list <string> list2{"rahul","rohit","ruby","sonam"};

//    accessing list using iterator
    list <int>::iterator p = list1.begin();  //creating a pointer for list
    while(p !=list1.end())
    {
        cout<<*p<<endl;
        p++;
    }
    //size method
    cout<<"Total value in list1 "<<list1.size()<<endl;
    cout<<"Total value in list2 "<<list2.size()<<endl;
    //push method inserting value in list at last index
    list2.push_back("Deepika");
    list2.push_front("Sanjay");
    cout<<"After pushing element in list2"<<endl;
    list <string>::iterator p1 = list2.begin();  //creating a pointer for list
    while(p1 !=list2.end())
    {
        cout<<*p1<<endl;
        p1++;
    }
    cout<<"Total value in list2 "<<list2.size()<<endl;


    system("pause");
}

//Vector class STL
//dynamic array
/*
    push_back(),pop_back(),at(),capacity() from() back();
*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    system("cls");
    //create a vector object
    vector <string> vect{"pyhon","c++","java"};
    //create a vector object with length
    vector <int> vect1(3);
    //create vector object and initilizing value
    vector <char> vect2(5,10);
    vector <string> vect3(5,"Hi");

    //printing value
    cout<<vect1[0]<<endl;
    cout<<vect1[2]<<endl;
    cout<<vect1[1]<<endl;
    cout<<vect3[0]<<endl;
    cout<<vect3[1]<<endl;
    cout<<vect3[2]<<endl;
    //printing value with loop
    for(int i=0;i<3;i++)
    {
        cout<<vect[i]<<endl;

    }
    //checking capacity of vector
    int cap1 = vect.capacity();
    cout<<"vect capacity is \n"<<cap1<<endl;
    //push_back() method adding value at the end
    cout<<"push_back element "<<endl;
    vect.push_back("C#");  //after pushing element capacity will be extend
    cout<<"vect capacity is "<<vect.capacity()<<endl;

    //remove the last element of vector capacity
    cout<<"poping element \n"<<endl;
    vect.pop_back();
    vect.pop_back();
    cout<<"After removing last element of vect "<<vect.capacity()<<endl;
    //checking size of vector
    cout<<"Vector size \n"<<endl;
    cout<<"number of element of vector of vect "<<vect.size()<<endl;
    //accessing all element of vector
    for(int i=0;i<vect.size();i++)
        cout<<"vect element is "<<vect[i]<<endl;


    //iterator with vector
    vector<int>::iterator pp= vect1.begin();
        vect1.insert(pp,10);

    for(int x=0;x<vect1.size();x++)
        cout<<"vect1 element "<<vect1[x]<<endl;



    system("pause");
}

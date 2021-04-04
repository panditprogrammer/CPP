//tuple in STL
//making tuple and accessing
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <tuple>
using namespace std;

int main()
{
    system("cls");
//    creating a tuple
    tuple <string,int,float>tup1;
    tup1 = make_tuple("Rohit",10,1000); //assigning value in tuple
    cout<<"Name = "<<get<0>(tup1)<<endl; //accessing value from tuple
    cout<<"Roll = "<<get<1>(tup1)<<endl;
    cout<<"Fees = "<<get<2>(tup1)<<endl;
    system("pause");
}

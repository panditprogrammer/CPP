//template in cpp generic function
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

template <class A> //A is called palceholder
A isGreater(A a,A b)
{
    return(a>b?a:b);
}
int main(int argc, char const *argv[])
{
    system("cls");
    int a ;
    a = isGreater(10,20);
    cout<<"Greater number is "<<a<<endl;
    cout<<"Greater number is "<<isGreater(34.2,67.8)<<endl;
    system("pause");
    return 0;
}

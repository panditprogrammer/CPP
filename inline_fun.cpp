//program to create a function inline
#include <iostream>
#include <stdlib.h>
inline void fun();
using namespace std;
int main()
{
    system("cls");
    fun();
    system("pause");
    return 0;
}
void fun(){
    cout<<"This function would be inline";
}

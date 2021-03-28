//function Template or generic function in cpp 
//handling different data type
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

//creating template 
template <class x> 
x sum(x a,x b)  //template function
{
    return(a+b);
}

int main(int argc, char const *argv[])
{
    system("cls");
    int v = sum(10,20);
    int v1 = sum(5.6,8.2);
    cout<<"sum is "<<v1<<endl;
    cout<<"Sum is "<<v<<endl;
    system("pause");
    
    return 0;
}

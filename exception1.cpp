//exception handling in 
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int factorial(int N)
{
    int f=1;
    for(int i=N;i>0;i--)
    {
        f = f * i;
    }
    return f;
}

int main(int argc, char const *argv[])
{
    int n;
    string e = "Please Enter a Positive number!";
    system("cls");
    cout<<"Enter Number to Calculate factorial ";
    cin>>n;
    try  //try block that may be throw error 
    {
        if(n>= 0)
        {
            cout<<"Factorial is "<<factorial(n)<<endl;
        }
        else
        {
            throw e;  //throwing error as e as defined above
        }
    }
    catch(string s) //catching the error 
    {
        cout<<s<<endl;
    }
    
    system("pause");
    return 0;
}

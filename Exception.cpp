//Exception handling 
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main() 
{
    int n;
    string s = "invalid number!";
    system("cls");

    cout<<"Enter number except 0 : ";
    cin>>n;
    try
    {
        if(n)
        {
            cout<<"Square is "<<n*n<<endl;
        }
        else
        {
            throw s; 
        }
    }
    catch (string s)
    {
        cout<<s<<endl;
    }

    system("pause");
}

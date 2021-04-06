//program to check leap year
#include <iostream>
using namespace std;
int main()
{
    int y;
    system("cls");
    cout<<"Enter Year ";
    cin>>y;
    if(y%400 == 0 || y%100 !=0 && y%4==0)
        cout<<"Leap Year "<<endl;
    else
        cout<<"Common Year "<<endl;
    system("pause");
}

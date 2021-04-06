//function overloading
#include <iostream>
#define PI 3.14
using namespace std;

float Area(float r)
{
    return PI*r*r;
}

float Area(float l,float b) //overloading of Area function
{
    return l*b;
}

int main()
{
    float l,b,r;
    system("cls");
    cout<<"Enter Radius of Circle ";
    cin>>r;
    cout<<"Area of Circle is "<<Area(r)<<endl;

    cout<<"Enter Length and Breadth of Rectangle ";
    cin>>l>>b;
    cout<<"Area of Rectangle is "<<Area(l,b)<<endl;

    system("pause");

}

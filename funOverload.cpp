//program to function overloading
#include <iostream>
#include <stdlib.h>
using namespace std;
float area(int);  //same name of function but different arguments
int area(int,int);
int main()
{
	int x,y,r;
	system("cls");
	cout<<"Enter radius of circle ";
	cin>>r;
	cout<<"area of circle is "<<area(r)<<endl;
	cout<<"Enter l and b of rectangle ";
	cin>>x>>y;
	cout<<"Area of rectangle is"<<area(x,y)<<endl;
	system("pause");
}
float area(int r)
{
	return(r*r*3.14);
}
int area(int l,int b)
{
	return(l*b);
}

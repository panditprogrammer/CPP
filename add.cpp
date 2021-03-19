//program to add number using functions
#include <iostream>
#include <stdlib.h>
using namespace std;
int add(int,int);
int main()
{
	int n1,n2,sum;
	system("cls");
	cout<<"Enter two numbers : ";
	cin>>n1>>n2;
	sum = add(n1,n2);
	cout<<"sum is "<<sum<<endl;
	system("pause");
	return 0;
}
//creating a function for add two numbers
int add(int n,int n1)
{
	return (n+n1);
}

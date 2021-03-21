//program to use default arguments
#include <iostream>
#include <stdlib.h>
using namespace std;
int add(int ,int,int n=0); //here is default arguments
int main()
{
	int n1,n2,n3;
	system("cls");
	cout<<"Enter two numbers ";
	cin>>n1>>n2;
	cout<<"sum is "<<add(n1,n2)<<endl;
	system("pause");
	return 0;
}
int add(int n,int n1 ,int n2)
{
	return (n+n1+n2);
}

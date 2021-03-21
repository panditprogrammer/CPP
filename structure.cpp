//structure in cpp
//struct keyword is optional in cpp while creating variable of structure

#include <stdlib.h>
#include <iostream>
#include <string.h>
struct student
{
	int roll;
	float fees;
	char name[20];
};

struct student s1; //struct keyword optional
student s2;
int main()
{
	student s1 ={1,1000,"rohit"};
	s2=s1; //assigning data to another structure
	return 0;
}

//structure in cpp
//struct keyword is optional in cpp while creating variable of structure

using namespace std;
#include <stdlib.h>
#include <iostream>
//defining structure
struct student
{
	int roll;
	float fees;
	char name[20];
};
//taking input from user using function
student takeInput()
{
    student s;
    cout<<"Enter roll, fees, name ";
    cin>>s.roll>>s.fees>>s.name;
    return s;
}
//displaying data using function
void display(student s)
{
    cout<<"roll "<<s.roll<<endl<<"fees "<<s.fees<<endl<<"name "<<s.name<<endl;
}

//main function
int main()
{
	student s1 ={1,1000,"rohit"};//this is how we assign data
	student s2;
	s2=takeInput(); //assigning data to another structure
	display(s2);
	return 0;
}

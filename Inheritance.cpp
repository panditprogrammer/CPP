//Inheritance
#include <iostream>
#include <string.h>
using namespace std;

class Person
{
private:  //accessible only in this class
    int age;
    char name[20];

protected: //not accessible with object of this class
   void setName(char *n)
    {
        strcpy(name,n);
    }
    void setAge(int a)
    {
        age = a;
    }
public:
    char* getName()
    {
        return(name);
    }
    int getAge()
    {
        return age;
    }

};

//inheritance of class Person
class Employee:public Person
{
private:
    float sallary;
protected:
    void setSallary(float s)
    {
        sallary = s;
    }
    float getSallary()
    {
        return sallary;
    }
public:

    void setEmployee(char *N,int A,float S)
    {
        setName(N);
        setAge(A);
        setSallary(S);
    }
    void showEmployee()
    {
        cout<<" Name is "<<getName()<<" Sallary is "<<getSallary()<<" Age is "<<getAge()<<endl;
    }

};

int main()
{
    system("cls");
    Employee emp;
    emp.setEmployee("Ruby",20,30000);
    emp.showEmployee();

    system("pause");
}

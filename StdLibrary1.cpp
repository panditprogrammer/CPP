//Standard Template Library
//pair in STL

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

class student
{
    private:
        string name;
        int Age;
    public:
        void set(string s,int r)
        {
            name = s;
            Age = r;
        }
        void show()
        {
            cout<<"Name is "<<name<<endl<<"Age is "<<Age<<endl;
        }
};


int main()
{


    system("cls");

    student s1;
    //create objects of pair
    pair <string,int> pa1;
    pair <string,string> pa2;
    pair <student,int> pa3;

    //create objects of student

    s1.set("Raj",20);
    //inserting value in pair
    pa1.first = "Hindi";
    pa1.second=80;

    pa2.first="india";
    pa2.second="delhi";

    pa3.first = s1;
    pa3.second = 1;

    //make_pair method
    pa3 = make_pair(s1,1);

    //accessing pair value
    cout<<"Pair 1 "<<pa1.first<<" "<<pa1.second<<endl;
    cout<<"Pair 2 "<<pa2.first<<" "<<pa2.second<<endl;

    student s4 = pa3.first;
    cout<<"Student pair "<<endl;
    cout<<"Number is "<<pa3.second<<endl;
    s4.show();


    system("pause");
}

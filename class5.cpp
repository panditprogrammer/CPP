//class and contructor
#include <iostream>
#include <stdlib.h>
using namespace std;
//creating class
class complex
{
    private:
    int a,b;
    public:
    void setValue(int x,int y)
    {
        a = x; b = y;
    }
    void getValue()
    {
        cout<<" a = "<<a<<"b = "<<b<<endl;
    }
    //creating constructor
    complex()
    {
        cout<<"this is constructor\n";
    }
};
int main()
{
    system("cls");
    complex c1,c,c2; //constructor is implicitly invoked when object is created
    system("pause");
    return 0;
}
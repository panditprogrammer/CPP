//overloading of Insertion<< and Extraction>> operators 
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class complex 
{
    private:
    int a,b;
    public:
    void setData(int x,int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout<<" a = "<<a<<" b = "<<b<<endl;
    }
    //for overloading friend function defining here
    friend ostream& operator<<(ostream&,complex);
    friend istream& operator>>(istream&,complex&);

};
//defining outside of the class
ostream& operator<< (ostream &dout,complex c) 
{
    cout<<endl<<"a = "<<c.a<<" b = "<<c.b;
    return dout;
}
istream& operator>>(istream &din,complex &c)
{
    cin>>c.a>>c.b;
    return din;
}



int main(int argc, char const *argv[])
{
    system("cls");
    complex c1;
    cout<<"Enter complex number ";
    cin>>c1;
    cout<<" you have entered ";
    cout<<c1;
    system("pause");
    return 0;
}

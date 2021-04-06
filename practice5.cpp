//define a rectangle class
#include <iostream>
using namespace std;

class Rect
{
private:
    int length,breadth;
public:
    void setDimension(float l,float b)
    {
        length = l; breadth = b;
    }

    void showDimension()
    {
        cout<<"Length is "<<length<<" Breadth is "<<breadth<<endl;

    }
    float getArea()
    {
        return(length*breadth);
    }
    float getPerimeter()
    {
        return(2*(length+breadth));
    }
};


int main()
{
    float a,b;
    system("cls");
    Rect r1;
    cout<<"Enter length and breadth of Rectangle ";
    cin>>a>>b;
    r1.setDimension(a,b);
    r1.showDimension();
    cout<<"Area is "<<r1.getArea()<<endl;
    cout<<"Perimeter is "<<r1.getPerimeter()<<endl;
    system("pause");
}

//Object pointer : a pointer contains address of object
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class Box
{
    private:
    int length,width,height;
    public:
    void setDimenstion(int x,int y,int z)
    {
        length = x;
        width = y;
        height = z;
    }
    void ShowDimension()
    {
        cout<<" length ="<<length<<" width ="<<width<<" height="<<height<<endl;
    }
};

int main(int argc, char const *argv[])
{
    system("cls");
    
    Box box;  //creating an object
    Box *boxp; //creating a object pointer
    boxp = &box;   //assigning address of object
    // box.setDimenstion(8,10,14);  
    // box.ShowDimension();
//calling method using object pointer using -> operator
    boxp->setDimenstion(10,20,8);
    boxp->ShowDimension();

    system("pause");
    return 0;
}

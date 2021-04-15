//overloading of subscript operator []
#include <iostream>
using namespace std;

class Array
{
private:
    int arr[5];
public:
    void setData(int i,int v)
    {
        arr[i] = v;
    }
    int operator[](int i)
    {
        return arr[i];
    }


};


int main()
{
    Array array1;
    int i;

    for(i=0;i<5;i++)
    {
        array1.setData(i,10*(i+1)+1);
    }
    //after overloading
    for(i=0;i<5;i++)
    {
        cout<<" "<<array1[i]; //array1.operator[](i);
    }

}

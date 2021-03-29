//template class or generic class
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

//creating template class
template <class X> class ArrayList
{
    private:
    struct OneBlock
    {
        int capacity;
        X *arrayPointer;
    };

    //create a structure pointer variable
    OneBlock *s;

    public:
    //constructor
    ArrayList(int cap)
    {
        s = new OneBlock;
        s->capacity = cap;
        s->arrayPointer = new X[s->capacity];
    }

    //add element in arraylist
    void addElement(int index,X data)
    {
        if(index >= 0 && index <= s->capacity-1)
            s->arrayPointer[index] = data;
        else
            cout<<"\n Array index out of range!"<<endl;
    }
    //checking element in array
    void viewElement(int index,X &data)
    {
        if(index >= 0 && index <= s->capacity-1)
            data = s->arrayPointer[index];
        else
            cout<<"\n Array index is not valid!"<<endl;
    }
    
    void viewList()
    {
        int i;
        for(i=0;i< s->capacity;i++)
        cout<<" "<<s->arrayPointer[i];
    }
};

int main(int argc, char const *argv[])
{
    system("cls");
    ArrayList <float>list(2);
    list.addElement(0,1.0);
    list.addElement(1,0.8);
    list.viewList();
    system("pause");
    return 0;
}

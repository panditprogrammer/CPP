//STL - Standard Template Library
//Array class template
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <array>
using namespace std;


int main(int argc, char const *argv[])
{
    system("cls");

    array <int,5> Arr = {8,20,33,11,44};
    cout<<Arr.at(4)<<endl;  //at function accessomg element in array
    cout<<Arr[2]<<endl;  //accessomg element in array
    cout<<Arr.front()<<endl;  //returning first element in array
    cout<<Arr.back()<<endl;  //returning last element in array
    //filling the values in array at every index
    cout<<"Array after filling "<<endl;
    Arr.fill(2);
    for(int i=0;i<5;i++)
    cout<<Arr[i]<<endl;


    //create array
    array <int,3> arr1={1,2,3};
    array <int,3> arr2={11,12,13};
    //swaping array
    arr1.swap(arr2);

    cout<<"Array arr1 after swaping"<<endl;
     for(int i=0;i<4;i++)
    cout<<arr1[i]<<endl;
    cout<<"Array arr2 after swaping"<<endl;
         for(int i=0;i<4;i++)
    cout<<arr2[i]<<endl;
    //find size of array
    cout<<"arr1 size is "<<arr1.size()<<endl;

    system("pause");
    return 0;
}

//copy data of one file to another file
#include <iostream>
#include <fstream>
using namespace std;

void fCopy(char *f1,char *f2)
{
    ifstream file1;
    ofstream file2;
    file1.open(f1);
    file2.open(f2);
    char ch;
    ch = file1.get();

    while(!file1.eof())
    {
        file2<<ch;
        ch = file1.get();
    }
    file1.close();
    file2.close();
    cout<<"copy done "<<endl;
}
int main()
{
    system("cls");

    fCopy("abc.txt","acopy.txt");



    system("pause");
}

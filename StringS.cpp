//Standard Library of String class
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string s1,s2,s3;
    s1 = "hello";  
    //character array string
    char str[10]="Student";
    //assining string to anther string
    s2 = str;
    cout<<s2<<endl;
    //concatenate string
    s3 = s2+str;
    cout<<s3<<endl;
    //user input in string object
    string st;
    // cout<<"\nEnter name ";
    // cin>>st;
    // cout<<"Your name is "<<st<<endl;
    st.assign("This is assing\n");
    cout<<st;
    //insert string at index 
    st.insert(3,"world");
    cout<<st<<endl;
    //repalce string 
    st.replace(2,6,"Test");
    cout<<st<<endl;
    //erase string 
    st.erase();
    cout<<st<<endl;
    //append in string
    st.append("This is demo text.");
    cout<<st<<endl;
    //find string
    cout<<st.find("text");
    //compare string
    /*
    0 = same string
    -1 = dictionary order
    1 = opposite of dictionary order
    */
    int x = s2.compare(s1);
    cout<<"After compare "<<x<<endl;
    //convert string 
    string str1,str2;
    char test[20]="hello world";
    str1.assign("This is string 1.");
    str2 = "This is string 2.";
    //convert in character string
    strcpy(test,str1.c_str());
    cout<<test<<endl;
    //size of string
    cout<<"String size is"<<str2.size();
    cout<<"String size is"<<str1.size();


    return 0;
}

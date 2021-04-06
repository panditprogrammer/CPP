//program to Define Time class
#include <iostream>
using namespace std;

class Time
{
private:
    int h,m,s;
public:
    void setTime(int,int,int); //i will define outside of the class no matter where you define
    void showTime()
    {
        cout<<"Time "<<h<<":"<<m<<":"<<s<<endl;
    }

    void normalize()
    {
        m= m+s/60;
        s = s%60;
        h = h+m/60;
        m = m%60;

    }
};
//defining time
void Time::setTime(int a,int b ,int c)
{
    h = a;
    m = b;
    s = c;
}

int main()
{
    int h,m,s;
    system("cls");
    Time t;
    cout<<"Enter Time";
    cin>>h>>m>>s;
    t.setTime(h,m,s);
    t.normalize();
    t.showTime();
    system("pause");
}

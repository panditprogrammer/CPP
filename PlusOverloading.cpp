// operator+ overloading in cpp

#include <iostream>
using namespace std;

class Time
{
private:
    int h,m,s;
public:
    void setTime(int h,int m,int s)
    {
        this->h = h;
        this->m = m;
        this->s = s;
    }

    void showTime()
    {
        cout<<"Time "<<h<<":"<<m<<":"<<s<<endl;
    }

        //this is for desire time format
    void normalize()
    {
        m = m+s/60;
        s = s%60;

        h = h+m/60;
        m = m%60;
    }

    //overloading of operator+
    Time operator+(Time t)
    {
        Time temp;

        temp.s = s+t.s;
        temp.m = m+t.m;
        temp.h = h+t.h;
        temp.normalize();
        return temp;
    }
};

int main()
{
    int H,M,S;
    Time t1,t2,t3;
    cout<<"\tTime addition"<<endl;
    cout<<"Enter Time 1 "<<endl;
    cin>>H>>M>>S;
    t1.setTime(H,M,S);
    cout<<"Enter Time 2 "<<endl;
    cin>>H>>M>>S;
    t2.setTime(H,M,S);
    cout<<"Time fist "<<endl;
    t1.showTime();
    cout<<"Time second "<<endl;
    t2.showTime();

    cout<<"adding time "<<endl;
    //t3 = t1.add(t2);
    t3 = t1+t2;   //this is instead of t1.operator+(t2);
    t3.showTime();






}

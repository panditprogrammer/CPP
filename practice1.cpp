//overloading of greater than operator
#include <iostream>
using namespace std;

class Time
{
private:
    int Hr,Min,Sec;
public:
    void setTime(int h,int m,int s)
    {
        Hr = h;
        Min = m;
        Sec = s;
    }
    void showTime()
    {
        cout<<"\nTime "<<Hr<<":"<<Min<<":"<<Sec<<endl;
    }
    int operator>(Time t)
    {
        if(Hr>t.Hr)
            return 1;
        else if(Hr<t.Hr)
            return 0;
        else if(Min>t.Min)
            return 1;
        else if(Min<t.Min)
            return 0;
        else if(Sec>t.Sec)
            return 1;
        else if (Sec<t.Sec)
            return 0;
    }
};
int main()
{
    int h,m,s;
    system("cls");
    cout<<"Enter Time(H:M:S) ";
    cin>>h>>m>>s;
    Time t1,t2;
    t1.setTime(h,m,s);
    cout<<"Enter Time(H:M:S) ";
    cin>>h>>m>>s;
    t2.setTime(h,m,s);

    //checking > operator
    if(t1>t2)
        t1.showTime();
    else
        t2.showTime();



    system("pause");
}

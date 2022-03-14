#include<iostream>
#include<iomanip>
using namespace std;
class time
{
private:
    int hour;
    int minn;
    int sec;
public:
    time():hour(0),minn(0),sec(0)
    {

    }
    time(int h,int m,int s):hour(h),minn(m),sec(s) {}
    void getdata()
    {
        cout<<"Enter hour:";
        cin>>hour;
        cout<<"Enter minute:";
        cin>>minn;
        cout<<"Enter second:";
        cin>>sec;

    }
    void showdata() const
    {
        std::cout << std::setw(2) << std::setfill('0') << hour;
        cout<<":";
        std::cout << std::setw(2) << std::setfill('0') << minn;
        cout<<":";
        std::cout << std::setw(2) << std::setfill('0') << sec;
        cout<<"\n";
    }
    void sum(time,time);
};
void time::sum(time a,time b)
{
    int exmin=0;
    int exhour=0;
    sec=a.sec+b.sec;
    if(sec>=60)
    {
        exmin=sec/60;
        sec=sec%60;
    }
    minn=a.minn+b.minn+exmin;
    if(minn>=60)
    {
        exhour=minn/60;
        minn=minn%60;
    }

    hour=a.hour+b.hour+exhour;
    if(hour>24)
        hour=hour%24;

}
int main()
{
    time t1,t3;
    time t2(5,58,58);
    t1.getdata();
    t3.sum(t1,t2);
    cout<<"The first time is:";
    t1.showdata();
    cout<<"The second time is:";
    t2.showdata();
    cout<<"The summation is:";
    t3.showdata();
    return 0;

}

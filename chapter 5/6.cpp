#include<iostream>
#include<iomanip>
using namespace std;
struct time
{
    int minute,hour;
    float sec;
};
long long int time_to_sec(time tt);
void sec_to_time(long long int s);
int main()
{
    time tt,res;
    long long int s,result;
    int a;
    cout<<"Type 1 for converting time to sec\n";
    cout<<"Type 2 for converting sec to time\n";
    cout<<"Type -1 for exit\n";



    do
    {
        cin>>a;
        if(a==1)
        {
            cout<<"enter the hour,minute and seconds\n";
            cin>>tt.hour>>tt.minute>>tt.sec;
            result=time_to_sec(tt);
            cout<<result<<" seconds\n";
        }
        if(a==2)
        {
            cout<<"enter the seconds\n";
            cin>>s;
            sec_to_time(s);

        }

    }
    while(a==1||a==2);

    return 0;
}
long long int time_to_sec(time tt)
{
    long long int total=0;
    total=(tt.hour*3600)+(tt.minute*60)+tt.sec;
    return total;
}
void sec_to_time(long long int s)
{
    time tt;
    int i;
    tt.minute=(s/60);
    tt.sec=(s%60);
    if (tt.minute>=60)
    {
        i=tt.minute;
        tt.minute=(tt.minute%60);
        tt.hour=(i/60);
        cout<<tt.hour<<" hour "<<tt.minute<<" minute "<<tt.sec<<"seconds";
    }
    else
    {

        cout<<tt.minute<<"-"<<tt.sec;
    }
}

#include<iostream>
using namespace std;
class Distance
{
private:
    int feet;
    float inch;
public:
    Distance():feet(0),inch(0.0)
    {}
    Distance(int f,float in):feet(f),inch(in)
    {}
    void getdist()
    {
        cout<<"feet:";
        cin>>feet;
        cout<<"inch:";
        cin>>inch;
    }
    void showdist()
    {
        cout<<feet<<"-"<<inch<<"\n";
    }
    void add(Distance d1,Distance d2)
    {

        int i=0,res=0;
feet=0;
        inch=d1.inch+d2.inch;
        if(inch>=12)
        {
            inch-=12.0;
            feet++;

        }
        feet+=d1.feet+d2.feet+res;
        cout<<feet<<"-"<<inch;
    }
};
int main()
{
    Distance dis1,dis2,dis3;
    dis1.getdist();
    dis2.getdist();
    dis1.showdist();
    dis2.showdist();
    dis3.add(dis1,dis2);
    return 0;
}

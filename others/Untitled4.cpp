#include<iostream>
#include<iomanip>
using namespace std;
class angle
{
private:
    int degrees;
    float minn;
    char ch;
public:
    angle():degrees(0), minn(0.0) {}
    angle(int d,float m,char c):degrees(d),minn(m),ch(c) {}

    void getvalue()
    {
        cout<<"Enter degree:";
        cin>>degrees;
        cout<<"\n";
        cout<<"Enter minutes:";
        cin>>minn;
        cout<<"\n";

    }
    void showvalue()
    {
        cout<<"The value is:";
        cout<<degrees<<"\xF8"<<minn<<"\'";
    }
};
int main()
{
    angle a;
    int i;
    cout<<"How many times you want to take input:";
    cin>>i;
    while(i--)
    {
        cout<<"\n";
        a.getvalue();
        a.showvalue();
    }
    return 0;
}

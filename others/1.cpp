#include<iostream>
using namespace std;
class Int
{
private:
    int var;
public:
    void setzero()
    {
        var=0;
    }
    void setdata(int d)
    {
        var=d;
    }
    void show()
    {
        cout<<"The data is "<<var<<"\n";
    }
    int sum(int s,int f)
    {

        var=s+f;
    }
};
int main()
{
    Int a;
    a.setzero();
    a.show();
    a.setdata(345);
    a.show();
    a.sum(345,100);
    a.show();
    return 0;

}

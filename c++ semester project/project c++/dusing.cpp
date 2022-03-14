#include<iostream>
#include "iteam.h"
using namespace std;
class dusing:public iteam /// derived dusing class
{
private:
    //char dus[MAX];
public:
    dusing()
    {
    }
    dusing operator+(dusing);
    void insert_du();
    void display_du();

    ~dusing()
    {
    }
};

/// Start operator+(dusing c) function
dusing dusing::operator+(dusing c)
{
    dusing ob2;
    ob2.sum=sum+c.sum;
    return (ob2);
}
/// End operator+(dusing c) function

/// Start insert_du() function
void dusing::insert_du()
{
    cout<<"what type of daily using thing is this ?(food,cosmatics,.......)"<<'\n';
    cin>>dus;
    cout<<'\n'<<'\n'<<'\n';
}
/// End insert_du() function

/// Start display_du() function
void dusing::display_du()
{
    cout<<"type :" <<dus<<'\n'<<'\n'<<'\n';
}
/// End display_du() function

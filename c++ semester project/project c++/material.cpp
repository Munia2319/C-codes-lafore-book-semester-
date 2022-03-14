#include<iostream>
#include "iteam.h"
using namespace std;
class material:public iteam /// derived material class
{
private:
    //int sp;
    //char mat[MAX],qu[MAX];
public:
    material()
    {
    }
    material operator+(material c);
    void insert_ma();
    void display_ma();
    ~material()
    {
    }
};

/// Start operator+(material c) function
material material::operator+(material c)
{
    material ob3;
    ob3.sum=sum+c.sum;
    return (ob3);
}
/// End operator+(material c) function

/// Start insert_ma() function
void material::insert_ma()
{
    cout<<"what type of raw material is this ?(vegetable,fish,fruits,.......)"<<'\n';
    cin>>mat;
    cout<<"what kind of quality do it carry ?"<<'\n';
    cin>>qu;
    cout<<"nomally after how many days it will be spoiled ?"<<'\n';
    cin>>sp;
    cout<<'\n'<<'\n'<<'\n';
}
/// End insert_ma() function

/// Start display_ma() function
void material::display_ma()
{
    cout<<"type :" <<mat<<'\n';
    cout<<"quality :" <<qu<<'\n';
    cout<<"the time after it will spoil:" <<sp<<'\n'<<'\n'<<'\n';
}
/// End display_ma() function


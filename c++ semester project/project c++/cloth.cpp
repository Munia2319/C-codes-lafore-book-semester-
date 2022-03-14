#include<iostream>
#include "iteam.h"
using namespace std;
class cloth:public iteam /// derived cloth class
{
private:

public:
    cloth operator+(cloth);
    void insert_cl();
    void display_cl();
    ~cloth()
{
 }
};
/// Start operator+(cloth c) function
cloth  cloth::operator+(cloth c)
{
    cloth ob1;
    ob1.sum=sum+c.sum;
    return (ob1);
}
/// End operator+(cloth c) function
/// Start insert_cl() function
void cloth::insert_cl()
{
    cout<<"what type of cloth is this ?(cotton,polyester,......)"<<'\n';
    cin>>clt;
    cout<<"what's the color of the cloth ?"<<'\n';
    cin>>cr;
    cout<<'\n'<<'\n'<<'\n';
}
/// End insert_cl() function
/// Start display_cl() function
void cloth::display_cl()
{
    cout<<"type :"<<clt<<'\n';
    cout<<"color :"<<cr<<'\n'<<'\n'<<'\n';
}
/// End display_cl() function

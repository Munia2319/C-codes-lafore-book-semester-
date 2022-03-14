#include<iostream>
#include<iomanip>
#define maxx 80
using namespace std;
class sales
{
private:
    float arra[3];
public:
    void getdata()
    {
        for(int i=0; i<3; i++)
        {
            cout<< "\n\t Enter The whole sale for month"<<i+1<<":";
            cin>>arra[i];
        }

    }
    void putdata()
    {
        for(int i =0 ; i<3; i++)
        {
            cout<<"\n\t "<<arra[i]<< " ";
        }
        cout<<endl;
    }
};
class pub
{
private:
    char title[maxx];
    float price;
public:
    void getdata()
    {
        cout<< " \n\t Enter The Title:";
        cin>>title;
        cout<< "\n\t Enter The Price:";
        cin>>price;

    }
    void putdata()
    {
        cout<< "\n\t Title::"<<title;
        cout<< "\n\t Price::"<<price;

    }

};
class book:public pub,public sales
{
private:
    int count;
public:
    book():count(0)
    {

    }
    void getdata()
    {
        pub::getdata();
        cout<< " \n\t Enter the number of pages:";
        cin>>count;
        sales::getdata();
    }
    void putdata()
    {
        pub::putdata();
        cout<< "\n\t Pages:"<<count<<endl;
        cout<< "\n\t Sales"<<endl;
        sales::putdata();
    }
};
class tape:public pub,public sales
{
private:
    float minutes;
public:

    tape():minutes(0)
    {

    }
    void getdata()
    {
        pub::getdata();
        cout<< " \n\t Enter The Minutes::";
        cin>>minutes;

        sales::getdata();
    }
    void putdata()
    {
        pub::putdata();
        cout<< "\n\t Minutes:"<<minutes<<endl;
        cout<< "\n\t Sales:";
        sales::putdata();
    }
};

int main()
{
    book b1;
    tape t1;
    b1.getdata();
    t1.getdata();
    cout<<"   ****Here is the details:****\n";
    b1.putdata();
    t1.putdata();
    return 0;
}

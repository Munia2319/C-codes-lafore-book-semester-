#include<iostream>
#define maxx 80
using namespace std;
class publication
{
private:
    char title[maxx];
    float price;
public:
    void getdata()
    {
        cout<< " \n Enter The Title:";
        cin>>title;
        cout<< "\n Write The Price:";
        cin>>price;

    }
    void putdata()
    {
        cout<< "\n Title::"<<title;
        cout<< "\n Price::"<<price;

    }

};

class publication2:public publication
{
private:
    char date[maxx];
public:
    void getData()
    {
        publication::getdata();
        cout<< "\n Enter The Date:";
        cin>>date;
    }
    void putdata()
    {
        publication::putdata();
        cout<< "\n Publication Date is:"<<date<<endl;
    }
};

class book:public publication2
{
private:
    int count;
public:
    book():count(0)
    {

    }
    void getdata()
    {
        publication2::getdata();
        cout<< " \n Enter The Page:";
        cin>>count;
    }
    void putdata()
    {
        publication2::putdata();
        cout<< "\n Page:"<<count;
    }
};
class tape:public publication2
{
private:
    float minutes;
public:

    tape():minutes(0)
    {

    }
    void getdata()
    {
        publication2::getdata();
        cout<< " \n Write The Minutes::";
        cin>>minutes;
    }
    void putdata()
    {
        publication2::putdata();
        cout<< "\n Minutes::"<<minutes;
    }
};

int main()
{
    book b1;
    tape t1;
    b1.getdata();
    t1.getdata();
    b1.putdata();
    t1.putdata();
    return 0;
}


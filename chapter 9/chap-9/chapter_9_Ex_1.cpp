#include<iostream>
#include<iomanip>
#define MAX 80
using namespace std;
class publication
{
    private:
    char title[MAX];
    float price;
    public:
        void getData()
    {
        cout<< " \n Write a Book Title::";
        cin>>title;
        cout<< "\n Write The Price::";
        cin>>price;

    }
    void putData()
    {
        cout<< "\n Title::"<<title;
        cout<< "\n Price::"<<price;

    }

};
class book:public publication
{
private:
    int count;
public:
    book():count(0)
    {

    }
    void getData()
    {
        publication::getData();
        cout<< " \n Write The Page::";
        cin>>count;
    }
    void putData()
    {
    publication::putData();
        cout<< "\n Page::"<<count;
    }
};
class tape:public publication
{
private:
    float minutes;
public:

    tape():minutes(0)
    {

    }
    void getData()
    {
        publication::getData();
        cout<< " \n Write The Minutes::";
        cin>>minutes;
    }
    void putData()
    {
        publication::putData();
        cout<< "\n Minutes::"<<minutes;
    }
};

int main()
{
    book book1;
    tape tape1;
    book1.getData();
    tape1.getData();

    book1.putData();
tape1.putData();

    return 0;
}

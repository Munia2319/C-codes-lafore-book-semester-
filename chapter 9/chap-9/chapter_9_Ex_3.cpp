#include<iostream>
#include<iomanip>
#define MAX 80
using namespace std;
class sales
{
private:
    float arr[3];
public:
    void getData()
    {
        for(int i=0; i<3; i++)
        {
            cout<< "\n Enter The sale for month:"<<i+1<<" ::";
        cin>>arr[i];
        }

    }
    void putData()
    {
        for(int i =0 ; i<3; i++)
        {
            cout<<arr[i]<< " ";
        }
        cout<<endl;
    }
};
class publication
{
    private:
    char title[MAX];
    float price;
    public:
        void getData()
    {
        cout<< " \n Write The Title::";
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
class book:public publication,public sales
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
        sales::getData();
    }
    void putData()
    {
    publication::putData();
        cout<< "\n Page::"<<count<<endl;
        cout<< "\n Sales"<<endl;
        sales::putData();
    }
};
class tape:public publication,public sales
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

        sales::getData();
    }
    void putData()
    {
        publication::putData();
        cout<< "\n Minutes::"<<minutes<<endl;
        cout<< "\n Sales::";
        sales::putData();
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

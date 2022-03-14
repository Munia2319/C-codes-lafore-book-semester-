#include <iostream>
#include <conio.h>
using namespace std;
const int length = 80;

class employee
{
private:
    char name[length];
    unsigned long number;
public:
    void getdata()
    {
        cout << "\n Enter last name : ";
        cin >> name;
        cout << " Enter number :";
        cin >> number;
    }
    void putdata() const
    {
        cout << "\n Name : " << name;
        cout << "\n Number : " << number;
    }
};

class employee2 :public employee
{
private:
    float com;
    enum paytype { hourly, weekly, monthly };
    paytype period;
public:
    void getdata()
    {
        char a;
        employee::getdata();
        cout << " Enter compensation: ";
        cin >> com;
        cout << " Enter payment period (h,w,m): ";
        cin >> a;
        switch (a)
        {
        case 'h':
            period = hourly;
            break;
        case 'w':
            period = weekly;
            break;
        case 'm':
            period = monthly;
            break;
        }
    }
    void putdata() const
    {
        employee::putdata();
        cout << " Employee compensation: " << com << endl;
        switch (period)
        {
        case hourly:
            cout << "hourly" << endl;
            break;
        case weekly:
            cout << "weekly" << endl;
            break;
        case monthly:
            cout << "monthly" << endl;
            break;
        }
    }
};

class manager : public employee2
{
private:
    char title[length];
    double dues;
public:
    void getdata()
    {
        employee2::getdata();
        cout << " Enter title : ";
        cin >> title;
        cout << " Enter golf club dues : ";
        cin >> dues;
    }
    void putdata() const
    {
        employee2::putdata();
        cout << "\n Title : " << title<<endl;
        cout << "\n Golf club dues : " << dues<<endl;
    }
};

class scientist : public employee2
{
private:
    int pub;
public:
    void getdata()
    {
        employee2::getdata();
        cout << " Enter number of publications : ";
        cin >> pub;
    }
    void putdata() const
    {
        employee2::putdata();
        cout << "\n Number of publications : " << pub<<endl;
    }
};

class laborer : public employee2
{};

int main()
{
    manager m1, m2;
    scientist s1;
    laborer l1;
    cout << endl;
    cout << "\n*Enter data for manager 1"<<endl;
    m1.getdata();
    cout << "\n*Enter data for manager 2"<<endl;
    m2.getdata();
    cout << "\n*Enter data for scientist 1"<<endl;
    s1.getdata();
    cout << "\n*Enter data for laborer 1"<<endl;
    l1.getdata();
    cout << "\n*Details of manager 1"<<endl;
    m1.putdata();
    cout << "\n*Details of manager 2"<<endl;
    m2.putdata();
    cout << "\n*Details of scientist 1"<<endl;
    s1.putdata();
    cout << "\n*Details of laborer 1"<<endl;
    l1.putdata();
    cout << endl;
    return 0;
}

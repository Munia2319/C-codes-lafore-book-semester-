#include<iostream>
#include<iomanip>
using namespace std;
class date
{
private:
    int month,day,year;
public:
    void getdate()
    {
        cout<<"Enter day:";
        cin>>day;
        cout<<"\nEnter month:";
        cin>>month;
        cout<<"\nEnter year:";
        cin>>year;
    }
    void showdate()
    {
        std::cout<<std::setw(2)<<std::setfill('0')<<day;
        cout<<"\\";
        std::cout<<std::setw(2)<<std::setfill('0')<<month;
        cout<<"\\"<<year;
    }

};
int main()
{
    date d;
    d.getdate();
    cout<<"\nThe date is:";
    d.showdate();
    return 0;
}


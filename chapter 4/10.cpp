#include<iostream>
#include<iomanip>
struct sterling
{
    int pounds;
    int sillings;
    int pence;
};

using namespace std;
int main()
{
    sterling a;
    double decPounds,decFraction,temp;
    cout<< " Enter Decimal Pounds :";
    cin>> decPounds;
    cout<<endl;

    a.pounds = static_cast<int>(decPounds);
    decFraction = decPounds - a.pounds;
    temp =decFraction*20;
    a.sillings = decFraction*20;
    a.pence = (temp-a.sillings)*12;
    cout<< " Equivalent in old notation = "
        <<a.pounds<< "."<<a.sillings<< "."<<a.pence<<endl ;
    return 0;
}


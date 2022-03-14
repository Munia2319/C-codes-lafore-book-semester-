#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int pounds,shillings,pence;
    double decPounds,decFraction,temp;
    cout<< " Enter Decimal Pounds :";
    cin>> decPounds;
    cout<<endl;

    pounds = static_cast<int>(decPounds);
    decFraction = decPounds - pounds;
    temp =decFraction*20;
    shillings = decFraction*20;
    pence = (temp-shillings)*12;
    cout<< " Equivalent in old notation = "
        <<pounds<< "."<<shillings<< "."<<pence<<endl ;

    return 0;
}


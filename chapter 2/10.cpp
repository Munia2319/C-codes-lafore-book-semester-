#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

    double pounds ,decimal_pounds,shillings,pence ;
    cout<< " \nEnter Pounds:";
    cin>> pounds;
    cout<< " \nEnter Sillings:";
    cin>>shillings;
    cout<< " \nEnter Pence:";
    cin>>pence;
    decimal_pounds= pounds+ (shillings/20) + (pence/240);
    cout<< " \nDecimal pounds: "<<setprecision(3)<<decimal_pounds<<endl;

    return 0;
}

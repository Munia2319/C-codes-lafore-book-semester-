
#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()

{

    int i;
    float init_amount,rate, finl_amount;

    do
    {
        cout<<"\n Enter initial amount:: ";
        cin >>init_amount;

        cout<<"\n Enter interest rate (percent per year): ";
        cin >>rate;

        cout<<"\n Enter final amount : ";
        cin >>finl_amount;
        i=0;
        while(finl_amount>=init_amount)
        {
            finl_amount -= finl_amount*rate/100;
            i++;
        }
        cout<<"\n Number of years is : "<<i<<endl;
        cout<<"\n Press any key to exit:";

    }
    while(getche()=='c');

    return 0;
}




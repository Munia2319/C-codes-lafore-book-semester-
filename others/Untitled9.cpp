
#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<conio.h>
using namespace std;
class fraction
{
private:
    int numerator;
    int denominetor;
    char ch;
public:
    void getData()
    {
        cin>>numerator>>ch>>denominetor;
    }
    void showData()const
    {
        cout<<numerator<<"/"<<denominetor<<endl;
    }
    void addTwoFrac(fraction eq1 ,fraction eq2)
    {
        numerator =(eq1.numerator*eq2.denominetor)+ (eq1.denominetor*eq2.numerator);
        denominetor = eq1.denominetor*eq2.denominetor;
    }
};

int main()
{
    fraction eq1,eq2,sum;
    char ch;
    while(true)
    {
        cout<< " \n enter the inputs in the form of (numerator/denominator)::";
        eq1.getData();
        cout<< " \n enter the inputs in the form of (numerator/denominator)::";
        eq2.getData();
        sum.addTwoFrac(eq1 ,eq2);
        sum.showData();
        cout<< "\n enter your choice(y/n)::";
        ch=getche();
        if(ch=='n')
        {
            exit(0);
        }
    }

    return 0;
}




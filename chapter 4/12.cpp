#include<iostream>
#include<iomanip>
struct fraction
{
    int numerator;
    int denominator;
};

using namespace std;
int main()
{
    fraction f[2];
    char sign, Operator;
    char ch='y';
    cout<<endl;
    cout<< "     ========================================"<<endl;
    cout<< "           Enter The Inputs Like Below<"<<endl;
    cout<< "     ========================================"<<endl;
    cout<< "         Addition      : a/b + c/d    "<<endl;
    cout<< "         Subtraction   : a/b - c/d    "<<endl;
    cout<< "         Multiplication: a/b * c/d    "<<endl;
    cout<< "         Division      : a/b / c/d    "<<endl;
    cout<< "     ========================================="<<endl;
    cout<< "     ========================================="<<endl;
    do
    {


        cout<<" Write your Expression : ";

        cin >>f[0].numerator>>sign>>f[0].denominator>>Operator>>f[1].numerator>>sign>>f[1].denominator;

        if(Operator=='+')
        {
            cout<<"Addition = "<<(f[0].numerator*f[1].denominator + f[0].denominator*f[1].numerator)<<sign<<(f[0].denominator*f[1].denominator);
        }

        if(Operator=='-')
        {
            cout<<"Subtraction = "<<(f[0].numerator*f[1].denominator - f[0].denominator*f[1].numerator)<<sign<<(f[0].denominator*f[1].denominator);
        }
        if(Operator=='*')
        {
            cout<<"Multip[lication = "<<(f[0].numerator*f[1].denominator)<<sign<< (f[0].denominator*f[1].denominator);
        }

        if(Operator=='/')
        {
            if(f[0].denominator != 0 &&f[1].numerator!=0 )
            {
                cout<<"Division = "<<(f[0].numerator*f[1].denominator)<<sign<< (f[0].denominator*f[1].numerator);
            }

            else
            {
                cout<<"Math error !"<<endl;
            }
        }

        cout<< "\n Do you wish to continue y/n ::";
        cin>>ch;
    }
    while(ch!='n');
    return 0;
}




#include<iostream>
#include<iomanip>
#include<conio.h>

struct fraction
{
    int numerator;
    int denominator;
};
fraction fadd(fraction a, fraction b);
fraction fsub(fraction a, fraction b);
fraction fmul(fraction a, fraction b);
fraction fdiv(fraction a, fraction b);
using namespace std;
int main()
{
    fraction f[3];
    char sign, Operator;
    char ch;
    cout<<endl;

    cout<< "        Enter The Inputs Like Below"<<endl;

    cout<< "         Addition      : a/b + c/d    "<<endl;
    cout<< "         Subtraction   : a/b - c/d    "<<endl;
    cout<< "         Multiplication: a/b * c/d    "<<endl;
    cout<< "         Division      : a/b / c/d    "<<endl;

    do
    {
        cout<<"\n Write your Expression :: ";
        cin >>f[0].numerator>>sign>>f[0].denominator>>Operator>>f[1].numerator>>sign>>f[1].denominator;

        if(Operator=='+')
        {
            f[2]=fadd(f[0], f[1]);
        }

        if(Operator=='-')
        {
            f[2]=fsub(f[0], f[1]);
        }
        if(Operator=='*')
        {
            f[2]=fmul(f[0], f[1]);
        }
        if(Operator=='/')
        {
            f[2]=fdiv(f[0], f[1]);
        }
        cout<<" Answer = "<<f[2].numerator<<sign<<f[2].denominator;

        cout<< "\n Do you wish to continue y/n ::";
        cin>>ch;
    }
    while(ch!='n');
    return 0;
}
fraction fadd(fraction a, fraction b)
{
    fraction f;
    f.numerator  =a.numerator*b.denominator+a.denominator*b.numerator;
    f.denominator=a.denominator*b.denominator;
    return f;
}

fraction fsub(fraction a, fraction b)
{
    fraction f;
    f.numerator  =a.numerator*b.denominator-a.denominator*b.numerator;
    f.denominator=a.denominator*b.denominator;
    return f;
}

fraction fmul(fraction a, fraction b)
{
    fraction f;
    f.numerator  =a.numerator*b.numerator;
    f.denominator=a.denominator*b.denominator;
        return f;
}

fraction fdiv(fraction a, fraction b)
{
    fraction f;
    if(b.numerator != 0)
    {
        f.numerator  =a.numerator*b.denominator;
        f.denominator=b.numerator*a.denominator;
    }
    else
    {
        cout<<"Math error !"<<endl;
        return f;
    }
}



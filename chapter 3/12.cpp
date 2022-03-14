#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char ch = 'y';
    char sign,Operator;
    int a,b,c,d;
    cout<<endl;

    cout<< "          Enter The Inputs Like Below"<<endl;
    cout<< "           Addition      : a/b + c/d    "<<endl;
    cout<< "           Subtraction   : a/b - c/d    "<<endl;
    cout<< "           Multiplication: a/b * c/d    "<<endl;
    cout<< "           Division      : a/b / c/d    "<<endl;


    do
    {
        cout<<" Write your Expression :: ";
        cin>>a>>sign>>b>>Operator >>c>>sign>>d ;
        if(Operator=='+')
        {
            cout << " Addition = "<<(a*d + b*c)<<sign<<(b*d) <<endl;
        }
        if(Operator=='-')
        {
            cout << " subtraction = "<<(a*d - b*c)<<sign<<(b*d);
        }
        if(Operator=='*')
        {
            cout << " multiplication = "<<(a*c) <<sign<<(b*d);
        }
        if(Operator=='/')
        {
            if(b!=0&&c!=0)
            {
                cout << " division = "<<(a*d)<<sign<<(b*c);
            }
            else
            {
                cout<< "\n Math Error!!!"<<endl;
            }
        }
        cout<< "\n Do you wish to continue y/n ::";
        cin>>ch;
    }
    while(ch!='n');
return 0;}

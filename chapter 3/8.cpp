#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

    char ch ='y';
    int pounds1,sillings1,pence1,pounds2,sillings2,pence2,pounds,sillings=0,pence;

    do
    {
        cout<< "\n Enter First amount(Pounds,sillings,pence)::";
        cin>>pounds1
           >>sillings1
           >>pence1;
        cout<< "\n Enter Second amount(Pounds,sillings,pence)::";
        cin>>pounds2
           >>sillings2
           >>pence2;
        pounds = pounds1 +pounds2;
        pence =pence1 + pence2 ;
        if(pence>=12)
        {
            sillings++;
            pence-=12;

        }
        sillings+=sillings1+sillings2;
        if(sillings>=20)
        {
            pounds++;
            sillings-=20;
        }
        cout<< "\n Tottal amount is "<<pounds<< "."<<sillings<< "."<<pence<<endl;
        cout<< "\n Do you wish to continue y/n ::";
        cin>>ch;

    }
    while(ch!='n');
    return 0;
}


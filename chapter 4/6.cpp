#include<iostream>
#include<iomanip>
#include<conio.h>
enum etype {laborer, secretary, manager, accountant, executive, researcher};
using namespace std;
int main()
{
    etype x;
    char *ret;

    cout<<"\n Enter employee type (first letter only)"<<endl
        <<"(laborer, secretary, manager, accountant, executive, researcher):: ";

    switch(getche())
    {
    case 'l':
        x=laborer   ;
        break;
    case 's':
        x=secretary ;
        break;
    case 'm':
        x=manager   ;
        break;
    case 'a':
        x=accountant;
        break;
    case 'e':
        x=executive ;
        break;
    case 'r':
        x=researcher;
    }

    switch(x)
    {
    case 0:
        ret = " laborer"   ;
        break;
    case 1:
        ret = " secretary" ;
        break;
    case 2:
        ret = " manager"   ;
        break;
    case 3:
        ret = " accountant";
        break;
    case 4:
        ret = " executive" ;
        break;
    case 5:
        ret = " researcher";
    }
    cout<<"\nEmployee type is "<<ret<<"."<<endl;

    return 0;
}



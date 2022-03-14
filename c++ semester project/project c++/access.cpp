#include<iostream>
#include<conio.h>
using namespace std;
/// start login() function::
int access()
{
    string pass ="";
    string username;
    int count=0,i=2;
    char ch;
    x:
    cout<< "\t\t\t\t\t                Write Your User Name::";
    cin>>username;
    if(username!="a")
    {
        cout<< "\n\t\t\t\t\t                Your entered user name is wrong !!!";
        cout<< "\n\t\t\t\t\t                Now Your have at most "<<i<<" chances.";
        i--;
        count++;
        if(count==3)
        {
             _Exit(0);
        }
        goto x;

    }
    cout<<endl;
    cout << "\t\t\t\t\t                Enter Password ::";

    ch = _getch();
    while(ch != 13)
    {
        pass.push_back(ch);
        cout << '*';
        ch = _getch();
    }
    if(pass == "a")
    {
        cout << "\n\n\nAccess Granted.....\n";
        system("PAUSE");
        system("CLS");
    }
    else
    {
        cout << "\n\n\nAccess Failed.....\n";
        system("PAUSE");
        system("CLS");
        access();
    }
}
/// end login() funtion

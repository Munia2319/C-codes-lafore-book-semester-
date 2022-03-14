#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float input,c,f,a;
    int choice;
    cout<<"Type "<<setw(8)<<"1 to convert Farenheit to Celsius,\n";
    cout<<setw(8)<<"     2 to convert Celsius to  Farenheit ,\n";
    cin>>choice;
    if(choice==1)
    {
        cout<<"Enter temperature in Farenheit:";
        cin>>input;
        c=(((input-32)*5)/9);
        cout<<"In celcious that is "<<c;

    }
    if(choice==2)
    {
        cout<<"Enter temperature in Celcius:";
        cin>>input;
        f=(((input*9)/5)+32);
        cout<<"In Farenheit that is"<<f;

    }



    return 0;
}

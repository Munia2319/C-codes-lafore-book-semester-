#include<iostream>
#include<iomanip>
using namespace std;
int main()
{ float br,fr,gr,jp,input;
cout<<"Enter an amount in dollars\n";
cin>>input;
br=(input/1.487);
fr=(input/0.172);
gr=(input/0.584);
jp=(input/0.00955);
cout<<setw(8)<<"British pound"<<setw(16)<<br<<endl;
cout<<setw(8)<<"French Franc "<<setw(16)<<fr<<endl;
cout<<setw(8)<<"German deutsh"<<setw(16)<<gr<<endl;
cout<<setw(8)<<"Japanese yen "<<setw(16)<<jp<<endl;
return 0;
}

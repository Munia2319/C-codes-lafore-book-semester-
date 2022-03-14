#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int p1 = 2425785, p2 = 12344, p3=909;
    cout<<endl;
    cout<<setfill('.')
        <<setw(8)<<"Location "<<setw(12)<< "population"<<'\n'
        <<setw(8)<<"Portcity "<<setw(12)<<p1<<'\n'
        <<setw(8)<<"Hightown "<<setw(12)<<p2<<'\n'
        <<setw(8)<<"Lowville "<<setw(12)<<p3<<'\n';

    return 0;

}



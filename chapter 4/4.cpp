#include<iostream>
#include<iomanip>
struct emplyee
{
    int emplyee_number;
    float compensation;
};
using namespace std;
int main()
{
    emplyee emplyee1,emplyee2,emplyee3;
    cout<< "\n Empolyee Number:";
    cin>>emplyee1.emplyee_number;
    cout<< "\n Employee compensation:";
    cin>>emplyee1.compensation;
    cout<< "\n Employee Number:";
    cin>>emplyee2.emplyee_number;
    cout<< "\n Employee compensation:";
    cin>>emplyee2.compensation;
    cout<< "\n Employee Number:";
    cin>>emplyee3.emplyee_number;
    cout<< "\n Employee compensation:";
    cin>>emplyee3.compensation;

    cout<<setw(6)<< "\n\n Three Employee Informations:"<<endl;
    cout<<setw(4)<< " Number"<<" "<<setw(4)<< "Compensation"<<endl;

    cout<<setw(4)<<emplyee1.emplyee_number<< " "
        <<setw(7)<< "$"<<emplyee1.compensation<<endl;
    cout<<setw(4)<<emplyee2.emplyee_number<< " "
        <<setw(7)<<"$"<<emplyee2.compensation<<endl;
    cout<<setw(4)<<emplyee3.emplyee_number<< " "
        <<setw(7)<<"$"<<emplyee3.compensation<<endl;
    return 0;
}


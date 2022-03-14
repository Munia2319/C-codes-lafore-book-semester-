#include<iostream>
#include<iomanip>
using namespace std;
void larger(float d1,float d2);
int main()
{
    float d1,d2;
     int n;
    cout<<"enter the test case\n";
    cin>>n;
   while(n--)
    {
        cout<<"Enter the first distance:\n";
        cin>>d1;
        cout<<"Enter the second distance:\n";
        cin>>d2;
        cout<<"Here is the larger one:\n";
        larger(d1,d2);
        cout<<"\n";

    }
    return 0;
}
void larger(float d1,float d2)
{
    if(d1>d2)
        cout<<d1;
    else
    {
        cout<<d2;
    }
}

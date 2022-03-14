#include<iostream>
#define maxx 80
using namespace std;
int main()
{
    double arra[maxx];
    int n,sum=0,avg=0;;
    cout<< "\n Enter The Array size:";
    cin>>n;
    cout<< "\n Enter The elements:";
    for(int i =0 ; i<n ; i++)
    {
        cin>>*(arra+i);
        sum+=arra[i];
    }
    avg = sum/n;
    cout<< "\n Average is :"<<avg<<endl;

    return 0;
}

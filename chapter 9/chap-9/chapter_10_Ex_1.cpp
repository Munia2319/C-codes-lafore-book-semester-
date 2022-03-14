#include<iostream>
#include<iomanip>
#define MAX 80
using namespace std;
int main()
{
    float arr[MAX] ,sum=0,avg=0;
    int n;
    cout<< "\n Enter The Size Of The Array::";
    cin>>n;
cout<< "\n Enter The elements into Array::";
    for(int i =0 ; i<n ; i++)
    {
        cin>>*(arr+i);
        sum+=arr[i];
    }
    avg = sum/n;
    cout<< "\n Averege is ::"<<avg<<endl;

    return 0;
}

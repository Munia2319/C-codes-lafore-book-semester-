#include<iostream>
#include<iomanip>
#include<string>
#include<process.h>
#include<stdlib.h>
#define MAX 100
using namespace std;
class x
{
protected:
    int a[10];
public:
    void getData()
    {
        for(int i =0 ; i<10; i++)
        cin>>a[i];
    }
    void ShowData()
    {
        for(int i =0 ; i<10; i++)
        cout<<a[i]<<" ";
    }
    int& operator[](int n)
    {
        if(n>MAX)
    {
        cout<< "\n Index Out Of Boundery !";
        _Exit(1);
    }
    return a[n];
    }
};


int main()
{
    x* arr[MAX];
    char ch;
    int n  =0;
    do
    {
        arr[n] = new x;
        cout<< "\n Enter The Data(Upto 10 Elements)::";
        arr[n]->getData();
        n++;
        cout<< "\n More input?(y/n)::";
        cin>>ch;


    }
    while(ch!='n');
cout<< "\n The Entered Array Elements are::\n";
    for(int i=0 ; i<n; i++)
    {
        arr[i]->ShowData();
    }


cout<<endl;
    return 0;
}

#include<iostream>
#include<string>
#include<process.h>
#include<stdlib.h>
#define MAX 100
using namespace std;
class array
{
protected:
    int ar[10];
public:
    void getData()
    {
        for(int i =0 ; i<10; i++)
        cin>>ar[i];
    }
    void ShowData()
    {
        for(int i =0 ; i<10; i++)
        cout<<ar[i]<<" ";
    }
    int& operator[](int a)
    {
        if(a>MAX)
    {
        cout<< "\n there is no extra index ";
        _Exit(1);
    }
    return ar[a];
    }
};


int main()
{
    array* arr[MAX];
    char ch;
    int n  =0;
    do
    {
        arr[n] = new array;
        cout<< "\n Enter elements(Upto 10 Elements):";
        arr[n]->getData();
        n++;
        cout<< "\n Input again?(y/n):";
        cin>>ch;


    }
    while(ch!='n');
cout<< "\n The Entered Array Elements are:\n";
    for(int i=0 ; i<n; i++)
    {
        arr[i]->ShowData();
    }


cout<<endl;
    return 0;
}

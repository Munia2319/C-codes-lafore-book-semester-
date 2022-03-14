#include<iostream>
#include<iomanip>
void swap(int*,int*);
using namespace std;

int main()
{
    int a,b;
    cout<< "\n enter first value ::";
    cin>>a;
    cout<< "\n enter second value ::";
    cin>>b;
    swap(&a,&b);
    cout<<"\n Interchanged values are ::" <<a<<" , " <<b<<endl;

    return 0;
}

void swap(int *a,int*b)
{
    int x;
    x = *a ;
    *a = *b;
    *b = x ;
}



#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,result;
    char ch,op;
    do
    {
        cout<<"Enter first number,operator and second number:";
        cin>>a>>op>>b;
        if(op=='+')
        {
            result=a+b;
            cout<<"Answer: "<<result;
        }
        else if(op=='/')
        {
            result=a/b;
            cout<<"Answer: "<<result;
        }
        else if(op=='-')
        {
            result=a-b;
            cout<<"Answer: "<<result;
        }
        else if(op=='*')
        {
            result=a*b;
            cout<<"Answer: "<<result;
        }
        cout<<"\n";
        cout<<"Do another (y/n)?\n";
        cin>>ch;
    }
    while(ch!='n');

    return 0;
}

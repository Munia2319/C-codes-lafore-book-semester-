
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,input,result=1;
    cout<<"Enter a number:";
    while(input!=0)
    {
        result=1;
        cin>>input;
        if(input==0)
            break;
        for(i=input; i>=1; i--)
        {
            result=result*i;
        }
        cout<<"Factorial is:"<<result<<"\n";
        cout<<"Enter another number:";
    }

    return 0;
}

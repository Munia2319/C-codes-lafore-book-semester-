#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a[100],b[100],i,n;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i]>>b[i];
    }


    for(i=1; i<=4; i++)
    {
        cout<<setw(8)<<a[i]<<setw(12)<<b[i]<<endl;
    }

    return 0;
}

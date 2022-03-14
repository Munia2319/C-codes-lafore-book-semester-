#include<iostream>
using namespace std;
int main()
{
    int arra[100],i,n,item,loc=1;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>arra[i];
    }
    cin>>item;
    for(i=1; i<=n; i++)
    {
        if(arra[i]==item)
            cout<<i;
    }
    return 0;
}

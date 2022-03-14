#include<iostream>
using namespace std;
int main()
{
    int arra[100],n,k,j,item;
    cin>>n;
    for(j=1; j<=n; j++)
    {
        cin>>arra[j];
    }
    cin>>k;
    cin>>item;

    for(j=n; j>=k; j--)
    {
        arra[j+1]=arra[j];
    }
    n++;

    arra[k]=item;

    for(j=1; j<=n; j++)
    {
        cout<<arra[j]<<"\n";
    }
    cin>>k;
    cin>>item;
    for(j=k; j<=n; j++)
    {
        arra[j]=arra[j+1];
    }
    n--;
    for(j=1; j<=n; j++)
    {
        cout<<arra[j]<<"\n";
    }
    return 0;
}

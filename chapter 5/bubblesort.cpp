#include<iostream>
using namespace std;
int main()
{
    int arra[100],i,n,temp=0,j;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>arra[i];
    }
    for(i=1; i<=n-1; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            if(arra[j]>arra[j+1])
            {
                temp=arra[j];
                arra[j]=arra[j+1];
                arra[j+1]=temp;
            }
        }
    }
    for(i=1;i<=n;i++){
        cout<<arra[i]<<"\n";
    }
    return 0;
}

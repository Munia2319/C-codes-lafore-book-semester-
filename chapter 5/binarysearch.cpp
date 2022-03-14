#include<iostream>
using namespace std;
int main()
{
    int arra[100],n,i,mid,beg=1,endd,item,loc=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>arra[i];
    }
    cin>>item;
    endd=n;
    mid=int((beg+endd)/2);
    for(i=beg; i<=mid; i++)
    {
        if(item<arra[mid])
        {
            endd=mid;
            mid=int((beg+endd)/2);
        }
        else if(item>arra[mid])
        {
            beg=mid+1;
            mid=int((beg+endd)/2);
        }
        else if(item==arra[mid])loc=mid;

    }
    cout<<"item found in location"<<" "<<loc;

return 0;
}

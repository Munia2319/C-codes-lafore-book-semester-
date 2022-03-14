#include<iostream>
#include<cstring>
#define maxx
using namespace std;
void bsort(char**);
void order(char**,char**);
int main()
{
    char *days[maxx]= {"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"
                      };
    cout<< "\n  Days in the week are:";
    for(int i =0 ; i<7; i++)
    {
        cout<<days[i]<<" "<< ",";
    }
    cout<<endl;
    bsort(days);
    cout<< "\n Sorted days:";
    for(int i =0 ; i<7; i++)
    {
        cout<<days[i]<<" "<< ",";
    }
    cout<<endl;
    return 0;
}

void bsort(char** d)
{
    int n =7;
    for(int i =0; i<n-1; i++)
    {
        for(int j =i+1; j<n; j++)
        {
            order(d+i,d+j);

        }
    }
}

void order(char** d1,char** d2)
{
    char* temp ;
    if(strcmp(*d1,*d2)>0)
    {
        temp = *d1;
        *d1 = *d2;
        *d2 = temp;
    }


}

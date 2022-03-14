#include<iostream>
#define MAX 6
void addarray(float*,float*,float*,int);
using namespace std;
int main()
{
    float arra1[] = {2.3, 11.2, 3.12};
    float arra2[] = {2.65,2.32,5.11};
    float arra3[MAX];
    cout<< "\n  Array 1:2.3, 11.2, 3.12";
    cout<< "\n  Array 2:2.65,2.32,5.11";
    addarray(&arra1[0],&arra2[0],&arra3[0],6);
    cout<< "\n After Merging:";
    for(int i =0 ; i<6; i++)
    {
        cout<<arra3[i]<<" ,"<<" ";
    }
    cout<<endl;
    return 0;
}

void addarray(float* a,float*b,float*c,int size)
{
    for(int i =0; i<3; i++)
    {
        c[i]=a[i];
    }
    for(int j =0,i=3; j<3; j++, i++)
    {
        c[i]=b[j];
    }


}

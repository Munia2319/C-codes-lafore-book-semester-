#include<iostream>
#include<iomanip>
#define MAX 6
void addarray(float*,float*,float*,int);
using namespace std;
int main()
{
    float arr3[MAX];
    float arr1[] = {1.1, 2.2, 3.3};
    float arr2[] = {4.4,5.5,6.6};
cout<< "\n initialized values of Array1::1.1, 2.2, 3.3";
cout<< "\n initialized values of Array2::4.4,5.5,6.6";
    addarray(&arr1[0],&arr2[0],&arr3[0],6);
    cout<< "\n After Merging::";
    for(int i =0 ; i<6; i++)
    {
        cout<<arr3[i]<<" ,"<<" ";
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

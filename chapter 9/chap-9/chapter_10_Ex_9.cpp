#include<iostream>
#include<iomanip>
#define MAX 11
using namespace std;
void x(int*,int*,int*,int*,int*,int*,int*,int*,int*,int*);
int main()
{
    int a0[MAX],a1[MAX],a2[MAX],a3[MAX],a4[MAX],a5[MAX],a6[MAX],a7[MAX],a8[MAX],a9[MAX];
   for(int i=0;i<1; i++)
   {
       cin>>a0[i];
   }
   for(int i=0;i<1; i++)
   {
       cin>>a1[i];
   }for(int i=0;i<1; i++)
   {
       cin>>a2[i];
   }for(int i=0;i<1; i++)
   {
       cin>>a3[i];
   }for(int i=0;i<1; i++)
   {
       cin>>a4[i];
   }for(int i=0;i<1; i++)
   {
       cin>>a5[i];
   }for(int i=0;i<1; i++)
   {
       cin>>a6[i];
   }

   for(int i=0;i<1; i++)
   {
       cin>>a7[i];
   }for(int i=0;i<1; i++)
   {
       cin>>a8[i];
   }for(int i=0;i<1; i++)
   {
       cin>>a9[i];
   }
    x(&a0[0],&a1[0],&a2[0],&a3[0],&a4[0],&a5[0],&a6[0],&a7[0],&a8[0],&a9[0]);
}
void x(int*ap0,int*ap1,int*ap2,int*ap3,int*ap4,int*ap5,int*ap6,int*ap7,int*ap8,int*ap9)
{
    int**ap;
    *ap =ap0;
    //int**ap;
    for(int k=0; k<2;k++)
    {
    cout<<*ap[ap0][k];
    }
}

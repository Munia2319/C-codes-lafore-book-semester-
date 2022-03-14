#include<iostream>
#include<iomanip>
#include<conio.h>
void caller_counter(void);
using namespace std;
int main()
{
 int outer_counter=0;
 outer_counter++;
caller_counter();
 cout<<"\n The main programme counter value is: "<<outer_counter<<endl;
}

void caller_counter(void)
{
 static int inner_counter=0;
  inner_counter++;
 cout<<"I have been called "<<inner_counter<<" times";
}



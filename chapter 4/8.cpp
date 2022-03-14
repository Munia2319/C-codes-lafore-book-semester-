#include<iostream>
#include<conio.h>
struct fraction
{int numerator;
 int denominator;
 };

using namespace std;
int main()
{

 fraction equation[2];
 char Operator;

 cout<<"\n Enter first  fraction:: ";
 cin >>equation[0].numerator>>Operator>>equation[0].denominator;

 cout<<"\n Enter second fraction:: ";
 cin >>equation[1].numerator>>Operator>>equation[1].denominator;

 cout<<"\n Addition = "
    <<(equation[0].numerator*equation[1].denominator + equation[0].denominator*equation[1].numerator)
    <<Operator<<(equation[0].denominator*equation[1].denominator)<<endl;

 return 0;

}



#include <iostream>
using namespace std;
double power( double n, int p=2);
int main()
{
double number, answer;
int pow;
char YesOrNo;

cout << "\n Enter a number:: ";
cin >> number;

cout << "\n Want to enter a power (y/n)? ";
cin >> YesOrNo;
if( YesOrNo == 'y' )
{
cout << "\n Enter power::";
cin >> pow;
answer = power(number, pow);
}
else
answer = power(number);
cout << "\n Answer is " << answer << endl;
return 0;
}

double power( double n, int p )
{
double result = 1.0;

for(int j=0; j<p; j++)
result *= n;
return result;
}


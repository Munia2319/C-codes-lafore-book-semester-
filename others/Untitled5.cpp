#include<iostream>
#include<iomanip>
using namespace std;
class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction()(int n, int d):numerator(n),denominator(d) {}
    void get()
    {
        cin>>numerator;
        cout<<"/";
        cin>>denumerator;
    }

    Fraction addTo(Fraction &frac2, Fraction& frac3);
    void print()
    {
        cout << numerator << "/" << denominator;
    };
};
//Adds the value of the Fraction with the attached "addTo" method with the value of a second   specified Fraction and assigns the result to a third specified Fraction.
Fraction Fraction::addTo(Fraction& frac2, Fraction& addedTo)
{
    frac2.numerator = (numerator * frac2.denominator) + (denominator * frac2.numerator);
    frac2.denominator = (denominator * frac2.denominator);
    frac2.numerator = addedTo.numerator;
    frac2.denominator = addedTo.denominator;
    return addedTo;
}

int main()
{
    Fraction frac1, frac2, frac3;
    int n1, n2, d1, d2;

//Prompts the user for data and then assigns it to the correct variables.
    cout << "Enter First Numerator: ";
    cin >> n1;

    cout << "Enter First Denominator: ";
    cin >> d1;

    cout << "Enter Second Numerator: ";
    cin >> n2;

    cout << "Enter Second Denominator: ";
    cin >> d2;

    frac1.set(n1, d1);
    frac2.set(n2, d2);

    frac1.addTo(frac2, frac3);

//Formats output.
    cout<< "-------------------------\n"
        << frac1.print() << " + " << frac2.print()<< " = " << frac3.print() << endl;
    cout << "\n";

    return 0;
}

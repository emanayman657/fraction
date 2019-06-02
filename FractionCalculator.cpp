#include "FractionCalculator.h"
#include "Fraction.h"

FractionCalculator::FractionCalculator()
{
    //ctor
}
FractionCalculator::FractionCalculator (Fraction &f)
{
    Fraction r;
    int choose;
    cout << "enter the fraction that you want to do process with " <<endl;
    cin >>r;
    cout << "which process you want to do :"<< "1- add \n 2- subtract \n 3- multi \n 4- divide \n";
    cin >> choose;
    if (choose ==1)
    {
        Fraction a=r+f;
        a.reducing();
        cout << a;
    }
    if (choose ==2)
    {
        Fraction a=r-f;
        a.reducing();
        cout << a;
    }
    if (choose ==3)
    {
        Fraction a=r*f;
        a.reducing();

        cout << a;
    }
    if (choose ==4)
    {
        Fraction a=r/f;
        a.reducing();

        cout << a;
    }
}


FractionCalculator::~FractionCalculator()
{
    //dtor
}

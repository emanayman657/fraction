#include <iostream>
#include "Fraction.h"
#include "FractionCalculator.h"
using namespace std;
istream& operator >>(istream & in,Fraction& obj)
{
    cout << "enter the numerator : ";
    in >> obj.numerator;
    cout << "enter the denominator : ";
    in >> obj.denominator;
    return in ;
}
ostream& operator<<(ostream & out, Fraction& obj)
{
    obj.reducing();
    if (obj.numerator==0)
    {
        cout <<"error in this method zero is exist in numerator : ";
    }
    if (obj.denominator==0)
    {
        cout <<"error in this method zero is exist in denominator : ";
    }
    cout<< obj.numerator<<"/"<<obj.denominator;
    return out;
}

int main()
{
    Fraction f1;
    cout <<"enter the fraction 1 "<<endl;
    cin >> f1;
    Fraction f2;
    cout <<"enter the fraction 2 "<<endl;
    cin >>f2;
    int chooose ;
    int chose;
    cout << "hello :) please choose which procces you wanna do \n"<<
         " 1- ADD \n 2- subtract \n 3- multiple \n 4- divide \n 5- comparator\n";
    cin >> chooose;
    Fraction Add=f1+f2;
    Fraction Minus=f1-f2;
    Fraction Multi=f1*f2;
    Fraction Dvide=f1/f2;

    if (chooose ==1)
    {
        cout<<f1 << " + " << f2 << " = " << Add << endl ;
        cout << " do you wanna make extra procces ? \n 1- YES \n 2- NO\n ";
        cin >> chose;
        if (chose ==1)
        {
            FractionCalculator b(Add);
            if (chose ==2)
            {
                return 0;
            }

        }
    }
    if (chooose ==2)
    {
        cout<<f1 << " - " << f2 << " = " << Minus << endl ;
        cout << " do you wanna make extra procces ? \n 1- YES \n 2- NO\n ";
        cin >> chose;
        if (chose ==1)
        {
            FractionCalculator b(Minus);
            if (chose ==2)
            {
                return 0;
            }

        }
    }
    if (chooose ==3)
    {
        cout<<f1 << " * " << f2 << " = " << Multi << endl ;
        cout << " do you wanna make extra procces ? \n 1- YES \n 2- NO\n ";
        cin >> chose;
        if (chose ==1)
        {
            FractionCalculator b(Multi);
            if (chose ==2)
            {
                return 0;
            }

        }
    }
    if (chooose ==4)
    {
        cout<<f1 << " / " << f2 << " = " << Dvide << endl ;
        cout << "do you wanna make extra procces ? \n 1- YES \n 2- NO\n ";
        cin >> chose;
        if (chose ==1)
        {
            FractionCalculator b(Dvide);
            if (chose ==2)
            {
                return 0;
            }

        }
    }
    if (chooose ==5)
    {
        f1.comparing(f1,f2);
    }
    if (chooose>5||chooose<1)
    {
        cout <<" error this choose is not a valid " <<endl;
    }

    return 0;
}

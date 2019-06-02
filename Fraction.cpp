#include "Fraction.h"

Fraction::Fraction()
{
    int num;
    int den;
    numerator=  num;
    denominator=den;
}
Fraction Fraction ::operator+(Fraction f)
{
    if (numerator==0||denominator==0||f.numerator==0||f.denominator==0)
    {
        cout << "error in this method ";
    }
    f.numerator=(numerator*f.denominator)+(denominator*f.numerator);
    f.denominator=denominator*f.denominator;
    return(f);
}
Fraction Fraction::operator-(Fraction f)
{
    if (numerator==0||denominator==0||f.numerator==0||f.denominator==0)
    {
        cout << "error in this method ";
    }
    f.numerator=(numerator*f.denominator)-(denominator*f.numerator);
    f.denominator=denominator*f.denominator;
    return(f);
}
Fraction  Fraction::operator*(Fraction f)
{
    if (numerator==0||denominator==0||f.numerator==0||f.denominator==0)
    {
        cout << "error in this method ";
    }
    f.numerator=(numerator*f.numerator);
    f.denominator=denominator*f.denominator;
    return(f);
}
Fraction  Fraction::   operator/(Fraction f)
{
    if (numerator==0||denominator==0||f.numerator==0||f.denominator==0)
    {
        cout << "error in this method ";
    }
    f.numerator=(numerator/f.numerator);
    f.denominator=denominator/f.denominator;
    return(f);
}
bool Fraction::    operator == (Fraction f)
{
    if (((numerator*f.denominator)-(denominator*f. numerator))==0)
    {
        cout << numerator << "/"<< denominator <<" = "<<f.numerator<<"/"<<f.denominator << " : ";
        return true;
    }

    return false ;
}

bool Fraction::   operator > (Fraction f)
{
    if (((numerator*f.denominator)-(denominator*f. numerator))>0)
    {
        cout << numerator << "/"<< denominator <<" > "<<f.numerator<<"/"<<f.denominator << " : ";
        return true;
    }

    return false ;
}
bool Fraction::   operator < (Fraction f)
{
    if (((numerator*f.denominator)-(denominator*f. numerator))<0)
    {
        cout << numerator << "/"<< denominator <<" < "<<f.numerator<<"/"<<f.denominator << " : ";
        return true;
    }

    return false ;
}
void   Fraction::  comparing (Fraction F1, Fraction F2)
{
    F1.reducing();
    F2.reducing();
    if( F1 == F2 )
    {
        cout << " f1 is egual f2 " << endl;
    }
    if( F1 > F2 )
    {
        cout  << " f1 is greater than f2 " << endl;
    }
    if( F1 < F2 )
    {
        cout  << " f1 is less than f2 " << endl;
    }
}
int Fraction::  reducing()
{
    for (int i = denominator * numerator; i > 1; i--)
    {
        if ((denominator % i == 0) && (numerator % i == 0))
        {
            denominator /= i;
            numerator /= i;
        }
    }
    return numerator,denominator;
}
Fraction::~Fraction()
{
    //dtor
}

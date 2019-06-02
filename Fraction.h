#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
using namespace std;
class Fraction
{
public:
    friend istream& operator >>(istream & in,Fraction& obj);
    friend  ostream& operator<<(ostream & out, Fraction& obj);
    Fraction();
    virtual ~Fraction();
    Fraction operator+(Fraction f);
    Fraction operator-(Fraction f);
    Fraction operator*(Fraction f);
    Fraction operator/(Fraction f);
    bool operator == (Fraction f);
    bool operator > (Fraction f);
    bool operator < (Fraction f);
    void comparing (Fraction F1, Fraction F2);
    int reducing();


protected:

private :
    int numerator;
    int denominator;
public :

};

#endif // FRACTION_H

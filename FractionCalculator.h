#ifndef FRACTIONCALCULATOR_H
#define FRACTIONCALCULATOR_H
#include "Fraction.h"

class FractionCalculator :public Fraction
{
public:
    FractionCalculator();
    FractionCalculator (Fraction &f);
    virtual ~FractionCalculator();

protected:

private:
};

#endif // FRACTIONCALCULATOR_H

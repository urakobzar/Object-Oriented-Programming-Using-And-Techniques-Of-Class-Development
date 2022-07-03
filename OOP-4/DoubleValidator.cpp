#include "DoubleValidator.h"

bool DoubleValidator::IsValuePositive(double value)
{
    if (value >= 0)
    {
        return true;
    }
    return false;
}

bool DoubleValidator::IsValueInRange(double value, double min, double max)
{
    if ((value >= min)||(value <= max))
    {
        return true;
    }
    return false;
}

void DoubleValidator::AssertPositiveValue(double value)
{
    if (!DoubleValidator::IsValuePositive(value))
    {
        throw exception("The value can't be negative");
    }
}

void DoubleValidator::AssertValueInRange(double value, double min, double max)
{
    if (!DoubleValidator::IsValueInRange(value, min, max))
    {
        throw exception("The value can't out of range");
    }
}

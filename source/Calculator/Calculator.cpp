#include "Calculator.h"
#include <stdexcept>
//-----------------------------------------------------------------------------
Calculator::Calculator(int maxValue)
    : _maxValue {maxValue}
{}
//-----------------------------------------------------------------------------
int Calculator::Add(const int a, const int b)
{
    if (_maxValue - a < b || _maxValue - b < a)
        throw std::invalid_argument("a or b is too large and resulted in arithmetic overflow");

    return a + b;
}
//-----------------------------------------------------------------------------
int Calculator::Divide(const int a, const int b)
{
    if (b == 0) throw std::invalid_argument("Divisor must not be 0");

    return a / b;
}
//-----------------------------------------------------------------------------
void Calculator::Swap(int& a, int& b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}
//-----------------------------------------------------------------------------
const int& Calculator::getMaxValue()
{
    return _maxValue;
}
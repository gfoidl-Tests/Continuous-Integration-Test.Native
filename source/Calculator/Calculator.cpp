#include "Calculator.h"
#include <stdexcept>
//-----------------------------------------------------------------------------
int Calculator::Add(const int a, const int b)
{
    return a + b;
}
//-----------------------------------------------------------------------------
int Calculator::Divide(const int a, const int b)
{
    if (b == 0) throw std::invalid_argument("Divisor must not be 0");

    return a / b;
}
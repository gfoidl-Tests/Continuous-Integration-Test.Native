#include "Calculator.h"
#include <stdexcept>
//-----------------------------------------------------------------------------
int Calculator::Add(const int a, const int b)
{
    int sum = a + b;

    if (sum <= a || sum <= b) 
        throw std::invalid_argument("a or b is too large and resulted in arithmetic overflow");

    return sum;
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
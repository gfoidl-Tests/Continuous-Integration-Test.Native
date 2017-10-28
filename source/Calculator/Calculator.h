#pragma once
//-----------------------------------------------------------------------------
#include "Dll.h"
#include <limits.h>
//-----------------------------------------------------------------------------
class CALCULATOR_API Calculator
{
public:
    Calculator(int maxValue = INT_MAX);
    int Add(const int a, const int b);
    int Divide(const int a, const int b);
    void Swap(int& a, int& b);

    const int& getMaxValue();
    //-------------------------------------------------------------------------
private:
    int _maxValue;
};
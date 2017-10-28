#include "stdafx.h"
//-----------------------------------------------------------------------------
namespace Calculator_Tests_Calculator
{
    TEST_CLASS(Add)
    {
    public:
        TEST_METHOD(No_max_value_given___INT_MAX_used)
        {
            Calculator sut;

            int maxValue = sut.getMaxValue();

            Assert::AreEqual(INT_MAX, maxValue);
        }
        //---------------------------------------------------------------------
        TEST_METHOD(Max_value_given___OK)
        {
            Calculator sut = Calculator {42};

            int maxValue = sut.getMaxValue();

            Assert::AreEqual(42, maxValue);
        }
    };
}
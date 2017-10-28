#include "stdafx.h"
//-----------------------------------------------------------------------------
namespace Calculator_Tests_Calculator
{
    TEST_CLASS(Swap)
    {
    public:
        TEST_METHOD(Numbers_given___correct_swap)
        {
            int a = 3;
            int b = 4;

            Calculator sut;

            sut.Swap(a, b);

            Assert::AreEqual(4, a);
            Assert::AreEqual(3, b);
        };
        //---------------------------------------------------------------------
        TEST_METHOD(Huge_numbers___no_overflow)
        {
            int a = INT_MAX - 2;
            int b = INT_MAX;

            Calculator sut;

            sut.Swap(a, b);

            Assert::AreEqual(INT_MAX, a);
            Assert::AreEqual(INT_MAX - 2, b);
        }
    };
}
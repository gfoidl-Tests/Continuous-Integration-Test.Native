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
    };
}
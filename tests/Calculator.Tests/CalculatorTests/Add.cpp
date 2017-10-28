#include "stdafx.h"
//-----------------------------------------------------------------------------
namespace Calculator_Tests_Calculator
{
    TEST_CLASS(Add)
    {
    public:
        TEST_METHOD(Summands_given___correct_result)
        {
            int a = 3;
            int b = 4;

            Calculator sut;

            int actual = sut.Add(a, b);

            Assert::AreEqual(7, actual);
        }
    };
}
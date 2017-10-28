#include "stdafx.h"
//-----------------------------------------------------------------------------
namespace Calculator_Tests_Calculator
{
    TEST_CLASS(Divide)
    {
    public:
        TEST_METHOD(Args_given___correct_quotient)
        {
            int a = 12;
            int b = 4;

            Calculator sut;

            int actual = sut.Divide(a, b);

            Assert::AreEqual(3, actual);
        };
        //---------------------------------------------------------------------
        TEST_METHOD(Divisor_is_0___throws_Argument_Exception)
        {
            int a = 12;
            int b = 0;

            Calculator sut;
            bool isExceptionThrown = false;

            try
            {
                int actual = sut.Divide(a, b);
            }
            catch (std::invalid_argument&)
            {
                isExceptionThrown = true;
            }

            Assert::IsTrue(isExceptionThrown);
        }
    };
}
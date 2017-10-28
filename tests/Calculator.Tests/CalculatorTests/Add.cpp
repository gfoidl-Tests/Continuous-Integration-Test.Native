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
        //---------------------------------------------------------------------
        TEST_METHOD(INT_MAX_as_summand___overflow)
        {
            int a = INT_MAX;
            int b = 1;

            Calculator sut;
            bool isExceptionThrown = false;

            try
            {
                int actual = sut.Add(a, b);
            }
            catch (std::invalid_argument&)
            {
                isExceptionThrown = true;
            }

            Assert::IsTrue(isExceptionThrown);
        }
    };
}
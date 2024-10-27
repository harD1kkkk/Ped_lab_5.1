#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_5.1/lab_5.1.cpp" 
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(UnitTest)
    {
    public:

        TEST_METHOD(TestHFunction)
        {
            double result = h(2.0, 3.0);
            double expected = (4.0 + sin(2.0 * 3.0) + 9.0) / (1.0 + 4.0 + 9.0);
            Assert::AreEqual(expected, result, 0.0001);
        }
    };
}

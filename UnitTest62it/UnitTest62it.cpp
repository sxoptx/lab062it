#include "pch.h"
#include "CppUnitTest.h"
#include "../lab062it/lab062it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62Iter
{
    TEST_CLASS(UnitTest62Iter)
    {
    public:

        TEST_METHOD(TestMaxMin)
        {
            int a[5] = { 4, -7, 9, 0, -3 };
            int max, min;
            MaxMin(a, 5, max, min);
            Assert::AreEqual(9, max);
            Assert::AreEqual(-7, min);
        }

        TEST_METHOD(TestMaxMinAllNegative)
        {
            int a[4] = { -5, -2, -9, -4 };
            int max, min;
            MaxMin(a, 4, max, min);
            Assert::AreEqual(-2, max);
            Assert::AreEqual(-9, min);
        }
    };
}

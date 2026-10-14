#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1/5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(TestMethod1)
        {
            double t = k(1, 1);                      // викликаємо функцію k
            Assert::AreEqual(1.381773, t, 0.000001); // sin(1)+cos(1); третій аргумент – допустима похибка
        }

        TEST_METHOD(TestMethod2)
        {
            double t = k(2, 2);                      // sin(2)/4 + cos(2)/4
            Assert::AreEqual(0.123288, t, 0.000001);
        }
	};
}

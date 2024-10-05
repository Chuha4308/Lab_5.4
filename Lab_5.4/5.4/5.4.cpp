#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.4/Lb_5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My54
{
    TEST_CLASS(My54)
    {

            public:
				TEST_METHOD(TestMethod1)
				{

					double result;
					result = S0(1, 5);
					Assert::AreEqual(result, 0.094885, 0.001);
				}
				TEST_METHOD(TestMethod2_S1)
				{
					
					double result;
					result = S1(1, 5, 1);
					Assert::AreEqual(result, 0.094885, 0.001);
				}

				TEST_METHOD(TestMethod3_S2)
				{
					
					double result;
					result = S2(1, 5, 5);
					Assert::AreEqual(result, 0.094885, 0.001);
				}

				TEST_METHOD(TestMethod4_S3)
				{

					double result;
					result = S3(1, 5, 1, 0);
					Assert::AreEqual(result, 0.094885, 0.001);
				}
				TEST_METHOD(TestMethod5_S4)
				{
					
					double result;
					result = S4(1, 5, 5, 0);
					Assert::AreEqual(result, 0.094885, 0.001);
				}
	};
}
#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.2_iter/lab6.2_iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 5;
			int a[n] = {-2,3,5,8,-22};
			int c;
			c = Count(a, n);
			Assert::AreEqual(2, c);
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.3/project6.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63
{
	TEST_CLASS(UnitTest63)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int n = 10;
			int p[10] = { -1,3,4,-2,-7,6,-3,4,-5,9 };
			c = Count(p, n);
			Assert::AreEqual(c, 5);
		}
		TEST_METHOD(TestMethod2)
		{
			int c;
			int n = 10;
			int p[10] = { -1,-8,4,-2,-7,6,-3,4,-5,9 };
			c = Count_1(p, n);
			Assert::AreEqual(c, 6);
		}
	};
}

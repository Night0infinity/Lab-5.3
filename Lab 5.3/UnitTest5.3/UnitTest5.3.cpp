#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 5.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double m = s(0.01);
			Assert::AreEqual(m, 2,06122);
		}
	};
}

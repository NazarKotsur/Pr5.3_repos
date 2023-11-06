#include "pch.h"
#include "CppUnitTest.h"
#include "../Pr5.3/Pr5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 2.0;
			double expected = (cos(x) + 1) / (sin(x) * sin(x) + exp(x));

			double actual = z(x);
		}
	};
}

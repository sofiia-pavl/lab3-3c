#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Софія\source\repos\lab3-3c\lab3-3c\Fraction.cpp"
#include "C:\Users\Софія\source\repos\lab3-3c\lab3-3c\Object.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Fraction F;
			long int i = 1;
			F.SetI(1);
			Assert::AreEqual(i, F.GetI());
		}
	};
}

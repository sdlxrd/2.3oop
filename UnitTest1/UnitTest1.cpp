#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Misha\source\repos\2.3 oop\2.3 oop\Money.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money a(9, 2), b(10, 2);
			Assert::AreEqual(a.getKop(), b.getKop());
		}
	};
}

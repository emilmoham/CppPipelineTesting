#include "pch.h"
#include "CppUnitTest.h"
#include "../CompilerInfoPrinter/CompilerManager.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CompilerInfoPrinterTests
{
	TEST_CLASS(CompilerInfoPrinterTests)
	{
	public:
		
		TEST_METHOD(GetFullVersion)
		{
			std::string sExpected = std::to_string(_MSC_FULL_VER);
			Assert::AreEqual(sExpected, CompilerManager().GetFullVersion());
		}

		TEST_METHOD(GetShortVersion)
		{
			std::string sExpected = std::to_string(_MSC_VER);
			Assert::AreEqual(sExpected, CompilerManager().GetShortVersion());
		}
	};
}

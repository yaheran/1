#include "pch.h"
#include "CppUnitTest.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{

			Assert::AreEqual(2,example_test(1,1,1));
            Assert::AreEqual(0,example_test(-1,-1,-1));
            Assert::AreEqual(4,example_test(1,-1,1));
			Assert::AreEqual(0,example_test(-1,1,-1));
		}
		int example_test(int x,int y,int z)
        {
	      if(x>0&&y>0)
      	{
		  z=z*z;
	    }
	     else
	    {
		  z=z+1;
	    }
	     if(z>0)
	    {
		  z=z*2;
     	}
	      return z;
      }
	};
}



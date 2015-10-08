#include "Bar.h"

#include <gtest/gtest.h>

TEST(FooTestCase, FooTest_Success)
{
	Foo f;
    EXPECT_EQ(2, f.sum(1, 1));
}

TEST(FooTestCase, DISABLED_FooTest_Failure)
{
	Foo f;
	EXPECT_EQ(2, f.sum(1, 2));
}



// Using Test Fixture

class BarTest : public ::testing::Test
{
protected:
	
	virtual void SetUp()
	{
		bar.setFlag(true);
	}

	virtual void TearDown()
	{

	}

	Bar bar;
};


TEST_F(BarTest, BarTest_Flag_Failure)
{
	// ... constructs an instance of BarTest and execute SetUp()

	EXPECT_EQ(false, bar.getFlag());

	// ... call TearDown() and destructs the instance of BarTest created
}


TEST_F(BarTest, BarTest_Flag_Success)
{
	// ... constructs an instance of BarTest and execute SetUp()

	EXPECT_EQ(true, bar.getFlag());

	// ... call TearDown() and destructs the instance of BarTest created
}
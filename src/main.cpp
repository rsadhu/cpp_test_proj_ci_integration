#include <iostream>
#include <gtest/gtest.h>

class MyFixture : public ::testing::Test
{
protected:
    // SetUp() will be called before each test
    void SetUp() override
    {
        // Initialization code here
        value = 42;
    }

    // TearDown() will be called after each test
    void TearDown() override
    {
        // Clean-up code here
    }

    // Shared data members
    int value;
};

// Test case that uses the fixture
TEST_F(MyFixture, Test1)
{
    // Access fixture members
    EXPECT_EQ(value, 42);

    // Your test logic here
}

TEST_F(MyFixture, Test2)
{
    // Access fixture members
    EXPECT_EQ(value, 42);

    // Your test logic here
}

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);

    // Run the tests
    return RUN_ALL_TESTS();
}
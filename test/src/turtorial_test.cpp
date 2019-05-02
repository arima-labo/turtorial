// Headers in Gtest
#include <gtest/gtest.h>

// Headers in ROS
#include <ros/ros.h>

TEST(TestSuite, testCase1)
{
    EXPECT_EQ(1,1);
}

// Declare Test
TEST(TestSuite, testCase2)
{
    EXPECT_EQ(1,1);
}

TEST(TestSuite, testCase3)
{
    EXPECT_EQ(1,1);
}

// Run all the tests that were declared with TEST()
int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

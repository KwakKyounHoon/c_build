// tests.cpp
#include "test_example.c"
#include <gtest/gtest.h>

TEST(SquareRootTest2, PositiveNos) { 
    EXPECT_EQ(233168, sum(10000));
    // EXPECT_EQ(18.0, squareRoot(324.0));
    // EXPECT_EQ(25.4, squareRoot(645.16));
    // EXPECT_EQ(0, squareRoot(0.0));
}
 
// TEST(SquareRootTest, NegativeNos) {
//     EXPECT_EQ(-1.0, squareRoot(-15.0));
//     EXPECT_EQ(-1.0, squareRoot(-0.2));
// }
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

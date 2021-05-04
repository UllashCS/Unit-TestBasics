#include "gtest/gtest.h"
#include "../../SRC/MathOps.hpp"
#include "mock/mockMathOps.hpp"

using ::testing::Return;

#if 1
TEST(DiffTests, AbsoluteDifferenceBothZero) {
    MockTest mt;
    MathOps utObj(&mt);
    EXPECT_CALL(mt, Large(0,0))
    .Times(1)
    .WillOnce(Return(false));

    int res = utObj.AbsoluteDifference(0, 0);
    EXPECT_EQ(res, 0);
}

TEST(DiffTests, AbsoluteDifferenceOneZero) {
    MockTest mt;
    MathOps utObj(&mt);

    EXPECT_CALL(mt, Large(1,0))
    .Times(1)
    .WillOnce(Return(true));

    int res = utObj.AbsoluteDifference(1, 0);
    EXPECT_EQ(res, 1);
}

TEST(DiffTests, AbsoluteDifferenceZeroOne) {
    MockTest mt;
    MathOps utObj(&mt);
    EXPECT_CALL(mt, Large(0,1))
    .Times(1)
    .WillOnce(Return(false));

    int res = utObj.AbsoluteDifference(0, 1);
    EXPECT_EQ(res, 1);
}

TEST(DiffTests, AbsoluteDifferenceNegPos) {
    MockTest mt;
    MathOps utObj(&mt);
    EXPECT_CALL(mt, Large(-1,1))
    .Times(1)
    .WillOnce(Return(false));

    int res = utObj.AbsoluteDifference(-1, 1);
    EXPECT_EQ(res, 2);
}

TEST(DiffTests, AbsoluteDifferencePosNeg) {
    MockTest mt;
    MathOps utObj(&mt);
 
    EXPECT_CALL(mt, Large(1,-1))
    .Times(1)
    .WillOnce(Return(true));

    int res = utObj.AbsoluteDifference(1, -1);
    EXPECT_EQ(res, 2);
}

#endif
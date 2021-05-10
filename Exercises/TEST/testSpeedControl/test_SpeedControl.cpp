/**
 * @file test_SpeedControl.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "gtest/gtest.h"

/**
 * @brief 
 * 
 */
extern "C" {
	#include "../../SRC/SpeedControl.h"
	extern int curNum;
}

/**
 * @brief 
 * 
 */
using namespace testing;

/**
 * @brief Construct a new TEST object
 * 
 */
TEST(TestSpeedUp, LessThanMin) {
	curNum = MIN_NUM - 2;

	int res = SpeedUp();

	EXPECT_EQ(res, MIN_NUM);
}

/**
 * @brief Construct a new TEST object
 * 
 */
TEST(TestSpeedUp, MoreThanMax) {
	curNum = MAX_NUM + 2;

	int res = SpeedUp();

	EXPECT_EQ(res, MAX_NUM);
}

/**
 * @brief Construct a new TEST object
 * 
 */
TEST(TestSpeedUp, EqualToMin) {
	curNum = MIN_NUM;

	int res = SpeedUp();

	EXPECT_EQ(res, MIN_NUM+1);
}

/**
 * @brief Construct a new TEST object
 * 
 */
TEST(TestSpeedUp, EqualToMax) {
	curNum = MAX_NUM;

	int res = SpeedUp();

	EXPECT_EQ(res, MAX_NUM);
}

/**
 * @brief Construct a new TEST object
 * 
 */
TEST(TestSpeedUp, BetweenMINMAX) {
	curNum = 10;

	int res = SpeedUp();

	EXPECT_EQ(res, 11);
}

/**
 * @brief Construct a new TEST object
 * 
 */
TEST(TestSpeedSpeedDown, LessThanMin) {
	curNum = MIN_NUM - 2;

	int res = SpeedDown();

	EXPECT_EQ(res, MIN_NUM);
}

/**
 * @brief Construct a new TEST object
 * 
 */
TEST(TestSpeedSpeedDown, MoreThanMax) {
	curNum = MAX_NUM + 2;

	int res = SpeedDown();

	EXPECT_EQ(res, MAX_NUM);
}

/**
 * @brief Construct a new TEST object
 * 
 */
TEST(TestSpeedSpeedDown, EqualToMin) {
	curNum = MIN_NUM;

	int res = SpeedDown();

	EXPECT_EQ(res, MIN_NUM);
}

/**
 * @brief Construct a new TEST object
 * 
 */
TEST(TestSpeedSpeedDown, EqualToMax) {
	curNum = MAX_NUM;

	int res = SpeedDown();

	EXPECT_EQ(res, MAX_NUM - 1);
}

/**
 * @brief Construct a new TEST object
 * 
 */
TEST(TestSpeedSpeedDown, BetweenMINMAX) {
	curNum = 10;

	int res = SpeedDown();

	EXPECT_EQ(res, 9);
}
#include "gtest/gtest.h"

using namespace testing;

extern "C" {
	#include "../../SRC/DriverDistractionStatus.h"
	extern DD_STATUS DDStatus;
}

TEST(TestGetDDStatus, PARK_LESS_THAN_5) {

	//MockDDSEnv envObj;
	DDStatus = DD_STATUS__PARKING;

	//EXPECT_CALL(*envObj.GetInstance(), );

	EXPECT_EQ(DD_STATUS__PARKING, getDDStatus(DISBALE_DD_STATUS - 1));
}

TEST(TestGetDDStatus, PARK_MORE_THAN_5_LESS_THAN_10) {

	DDStatus = DD_STATUS__PARKING;
	EXPECT_EQ(DD_STATUS__PARKING, getDDStatus(DISBALE_DD_STATUS + 2));
}

TEST(TestGetDDStatus, PARK_MORE_THAN_5_MORE_THAN_10) {

	DDStatus = DD_STATUS__PARKING;
	EXPECT_EQ(DD_STATUS__DRIVING, getDDStatus(ENABLE_DD_STATUS + 2));
}

TEST(TestGetDDStatus, DRIVE_LESS_THAN_5) {

	//MockDDSEnv envObj;
	DDStatus = DD_STATUS__DRIVING;

	//EXPECT_CALL(*envObj.GetInstance(), );

	EXPECT_EQ(DD_STATUS__PARKING, getDDStatus(DISBALE_DD_STATUS - 1));
}

TEST(TestGetDDStatus, DRIVE_MORE_THAN_5_LESS_THAN_10) {

	DDStatus = DD_STATUS__DRIVING;
	EXPECT_EQ(DD_STATUS__DRIVING, getDDStatus(DISBALE_DD_STATUS + 2));
}

TEST(TestGetDDStatus, DRIVE_MORE_THAN_5_MORE_THAN_10) {

	DDStatus = DD_STATUS__DRIVING;
	EXPECT_EQ(DD_STATUS__DRIVING, getDDStatus(ENABLE_DD_STATUS + 2));
}

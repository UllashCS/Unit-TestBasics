#include "mock/mockVehicleInfo.hpp"

extern "C" {
	#include "../../SRC/VehicleInfo.h"
}

using namespace testing;
using ::testing::Return;

TEST(TestGetVIN, TEST_NULL) {

	int * VIN = NULL;

	getVIN(RIGION__EU, VIN);
}

TEST(TestGetVIN, EU) {
	int VIN;

	MockVIEnv mockObj;

	EXPECT_CALL(*mockObj.GetInstance(), ReadEepromData(MEMORY_SECTION_1))
		.WillOnce(Return(100));

	EXPECT_CALL(*mockObj.GetInstance(), ReadFlashData(MEMORY_SECTION_1))
		.WillOnce(Return(10));

	getVIN(RIGION__EU, &VIN);

	EXPECT_EQ (VIN, 110);
}

TEST(TestGetVIN, UK) {
	int VIN;

	MockVIEnv mockObj;

	EXPECT_CALL(*mockObj.GetInstance(), ReadEepromData(MEMORY_SECTION_2))
		.WillOnce(Return(200));

	EXPECT_CALL(*mockObj.GetInstance(), ReadFlashData(MEMORY_SECTION_2))
		.WillOnce(Return(20));

	getVIN(RIGION__UK, &VIN);

	EXPECT_EQ(VIN, 220);
}

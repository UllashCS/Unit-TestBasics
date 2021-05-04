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


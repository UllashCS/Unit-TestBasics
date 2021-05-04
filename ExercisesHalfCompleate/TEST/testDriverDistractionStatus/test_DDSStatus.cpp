#include "gtest/gtest.h"

using namespace testing;

extern "C" {
	#include "../../SRC/DriverDistractionStatus.h"
	extern DD_STATUS DDStatus;
}


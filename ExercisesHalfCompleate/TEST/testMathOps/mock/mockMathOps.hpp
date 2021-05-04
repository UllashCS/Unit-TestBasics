#ifndef MOCK_TEST_H
#define MOCK_TEST_H

#include "gmock/gmock.h"
#include "../../../SRC/Utils.hpp"

class MockTest : public Utils {
public:
	MOCK_METHOD2 (Large, bool(int a, int b));
//	MOCK_METHOD (bool, Large, (int a, int b));
};

#endif // MOCK_DIMWRP_INTERFACE_H

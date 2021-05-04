#ifndef MOCKVI_HPP
#define MOCKVI_HPP

#include <gmock/gmock.h>

extern "C" {
	#include "AccessMemory.h"
}

class MockVI {
    public:
		MOCK_METHOD (int, ReadEepromData, (MemorySection section));
		MOCK_METHOD (int, ReadFlashData, (MemorySection section));
};

class MockVIEnv {
	public:
		MockVIEnv() {
			__MockVI_instance = std::make_shared<MockVI>();
		}
		virtual ~MockVIEnv() {
			__MockVI_instance.reset();
		}
		static std::shared_ptr<MockVI> GetInstance() {
			return __MockVI_instance;
		}
	private:
		static std::shared_ptr<MockVI> __MockVI_instance;
};

#endif //MOCKVI_HPP

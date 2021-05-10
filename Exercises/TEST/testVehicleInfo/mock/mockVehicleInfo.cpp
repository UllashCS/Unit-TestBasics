#include "mockVehicleInfo.hpp"

std::shared_ptr<MockVI> MockVIEnv::__MockVI_instance;

int ReadEepromData(MemorySection section) {
	return MockVIEnv::GetInstance()->ReadEepromData(section);
}

int ReadFlashData(MemorySection section) {
	return MockVIEnv::GetInstance()->ReadFlashData(section);
}

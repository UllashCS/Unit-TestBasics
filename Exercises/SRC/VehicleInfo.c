#include "stdio.h"
#include "VehicleInfo.h"

#ifndef DISABLE_EXT_INC
#include "../External/AccessMemory.h"
#else
#include "AccessMemory.h"
#endif

void getVIN(Region eReg, int* VIN) {
    if (NULL != VIN) {
        if (RIGION__EU == eReg) {
            *VIN = ReadEepromData (MEMORY_SECTION_1) + ReadFlashData (MEMORY_SECTION_1);
        } else if (RIGION__UK == eReg) {
            *VIN = ReadEepromData (MEMORY_SECTION_2) + ReadFlashData (MEMORY_SECTION_2);
        } else {
            *VIN = 0;
        }
    }
}

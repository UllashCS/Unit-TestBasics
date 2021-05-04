#include "AccessMemory.h"

int ReadEepromData (MemorySection section) {
    int retValue = 0;
    switch (section) {
        case MEMORY_SECTION_1 : {
            retValue = DUMMY_DATA_EEPROM_1;
        }break;

        case MEMORY_SECTION_2 : {
            retValue = DUMMY_DATA_EEPROM_2;
        }break;

        default : {
            retValue = 0;
        }break;
    }

    return retValue;
}

int ReadFlashData (MemorySection section) {
    int retValue = 0;
    switch (section) {
        case MEMORY_SECTION_1 : {
            retValue = DUMMY_DATA_FLASH_1;
        }break;

        case MEMORY_SECTION_2 : {
            retValue = DUMMY_DATA_FLASH_2;
        }break;

        default : {
            retValue = 0;
        }break;
    }

    return retValue;
}


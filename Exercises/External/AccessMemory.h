#ifndef ACCESS_MEMORY_H
#define ACCESS_MEMORY_H

typedef enum {
    MEMORY_SECTION_1 = 65,
    MEMORY_SECTION_2,
    MEMORY_SECTION_3,
    MEMORY_SECTION_4,
    MEMORY_SECTION_5,
    MEMORY_SECTION__MAX,
}MemorySection;

#define DUMMY_DATA_EEPROM_1        20
#define DUMMY_DATA_EEPROM_2        30
#define DUMMY_DATA_FLASH_1         200
#define DUMMY_DATA_FLASH_2         300

int ReadEepromData (MemorySection section);
int ReadFlashData (MemorySection section);

#endif  //ACCESS_MEMORY_H

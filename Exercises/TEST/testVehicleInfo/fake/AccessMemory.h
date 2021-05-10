#ifndef ACCESS_MEMORY_H
#define ACCESS_MEMORY_H

typedef enum {
    MEMORY_SECTION_1,
    MEMORY_SECTION_2,
    MEMORY_SECTION__MAX,
}MemorySection;

int ReadEepromData (MemorySection section);
int ReadFlashData (MemorySection section);

#endif  //ACCESS_MEMORY_H

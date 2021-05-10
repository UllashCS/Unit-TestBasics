#ifndef VEHICLE_INFO_H
#define VEHICLE_INFO_H

typedef enum {
    RIGION__EU,
    RIGION__UK,
    RIGION__MAX
} Region;

void getVIN(Region eReg, int * VIN);

#endif  //VEHICLE_INFO_H

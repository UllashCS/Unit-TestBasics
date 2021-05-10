#include "DriverDistractionStatus.h"
#include "SpeedControl.h"

APP_STATIC DD_STATUS DDStatus = DD_STATUS__PARKING; 

DD_STATUS getDDStatus(int iSpeed) {
    if (DD_STATUS__PARKING == DDStatus) {
        if (iSpeed > ENABLE_DD_STATUS) {
            DDStatus = DD_STATUS__DRIVING;
        } else {
            //do nothing
        }
    } else if (DD_STATUS__DRIVING == DDStatus) {
        if (iSpeed < DISBALE_DD_STATUS) {
            DDStatus = DD_STATUS__PARKING;
        } else {
            //do nothing
        }
    } else {
        //do nothing
    }

    return DDStatus;
}


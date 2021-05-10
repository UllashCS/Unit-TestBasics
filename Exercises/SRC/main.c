#include "stdio.h"
#include "SpeedControl.h"
#include "DriverDistractionStatus.h"
#include "VehicleInfo.h"

// Example 1 to demonstrate the test cases which uses static global variable
void SpeedAndDriverDistraction () {
    int temp;
    for (int i = 0; i < 25; i++) {
        temp = SpeedUp();
        printf ("Speed : %d, DD Status : %d\n", temp, getDDStatus(temp));
    }

    printf("\n\n");

    for (int i = 0; i < 25; i++) {
        temp = SpeedDown();
        printf ("Speed : %d, DD Status : %d\n", temp, getDDStatus(temp));
    }
}

int main () {
    int vinEu, vinUk = 0;

    SpeedAndDriverDistraction ();
    getVIN (RIGION__EU, &vinEu);
    getVIN (RIGION__UK, &vinUk);

    printf ("\n\nVIN EU : %d, VIN UK : %d", vinEu, vinUk);

    return 0;
}

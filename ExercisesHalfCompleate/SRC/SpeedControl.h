#ifndef SPEED_CONTROL_H
#define SPEED_CONTROL_H

#define MAX_NUM 20
#define MIN_NUM 0

#ifndef DISABLE_STATIC
    #define APP_STATIC static
#else
    #define APP_STATIC 
#endif

int SpeedUp (void);
int SpeedDown (void);

#endif  //SPEED_CONTROL_H

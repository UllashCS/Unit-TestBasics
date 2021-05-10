#include "SpeedControl.h"

APP_STATIC int curNum = MIN_NUM;

int SpeedUp() {

    curNum++;

    if (MIN_NUM > curNum) {
        curNum = MIN_NUM;
    }
    else if (MAX_NUM < curNum) {
        curNum = MAX_NUM;
    }
    else {
    }
    return curNum;
}

int SpeedDown() {

    curNum--;

    if (MIN_NUM > curNum) {
        curNum = MIN_NUM;
    }
    else if (MAX_NUM < curNum) {
        curNum = MAX_NUM;
    }
    else {

    }

    return curNum;
}

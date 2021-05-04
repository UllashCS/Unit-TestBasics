#include "MathOps.hpp"
#include "iostream"
using namespace std;

MathOps::MathOps(Utils *_instance){
    __utils_instance = _instance;
}

int MathOps::AbsoluteDifference (int a, int b) {

    if (__utils_instance->Large (a, b)){
        cout << a << " (a) is greater than (b) " << b << endl; 
        return a - b;
    }
    else {
        cout << b << " (b) is greater than (a) " << a << endl;
        return b - a;
    }
}

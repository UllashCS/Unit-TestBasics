#ifndef MATHOPS_HPP
#define MATHOPS_HPP

#include "Utils.hpp"

class MathOps {
public:
    MathOps(Utils* _instance);
    int AbsoluteDifference(int a, int b);
private:
    Utils* __utils_instance;
};

#endif //MATHOPS_HPP

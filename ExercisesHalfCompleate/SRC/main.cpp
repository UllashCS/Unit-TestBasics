#include "iostream"
#include "Week.hpp"
#include "MathOps.hpp"

using namespace std;
int main () {

    Week week;
    std::string *outDays = new std::string;

    Utils ut;
    MathOps testObj(&ut);

    week.setDay (Week::Days::MON);
    week.getDayInString (outDays);

    cout << *outDays << endl;

    cout << "Difference betwen -5 and 5 is " << testObj.AbsoluteDifference(-5,5) << endl;
    cout << "Difference betwen 5 and -5 is " << testObj.AbsoluteDifference(5,-5) << endl;

    return 0;
}
